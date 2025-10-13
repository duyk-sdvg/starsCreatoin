#include "cmath"
#include <QPainter>

#ifndef STAR_H
#define STAR_H
const int dim = 2;//размерность
const int numStars = 300;
const int borderMassC = 10;
const double G = 6.67408e-11, systemRadius = 1e12, distConnect = 1e9, dt = 10000, distSumm = 1000;
const double massSun   = 1.98892e30,
             massJup   = 1898.6e24,
             massSaturn = 5.683e26,
             massNeptun = 1.024e26,
             massUran  = 86.832e24,
             massEarth = 5.9742e24,
             massVenus = 4.867e24,
             massMarc = 6.417e23,
             massMercury = 3.301e23,
             massPluton = 1.309e22;

const double borderMass[] = {borderMassC*massPluton, borderMassC*massMercury,
                             borderMassC*massMarc, borderMassC*massVenus,
                             borderMassC*massEarth, borderMassC*massUran,
                             borderMassC*massNeptun, borderMassC*massSaturn,
                             borderMassC*massJup, borderMassC*massSun};

const int nborderMass = sizeof(borderMass) / sizeof(borderMass[0]);

const QColor colStar[] = {Qt::cyan, Qt::green,
                          Qt::darkGreen, Qt::magenta,
                          Qt::blue, Qt::darkBlue,
                          Qt::gray, Qt::red,
                          Qt::darkRed, Qt::yellow};

const int nColor = sizeof(colStar) / sizeof(colStar[0]);

class star{
public:
    static int starCounter;
    double x[dim];
    double v[dim];
    double m;
    double f[dim];
    QColor col;
    star(double *coord, double *speed, double mass);
    star();//конструктор по умолчанию
    void changing_color();
    double changing_size();
    ~star(){starCounter--;}



    star* operator + (const star& star2){
        double tmpM = this->m + star2.m, tmpX[dim], tmpV[dim];
        for(int k = 0; k < dim; ++k){
            tmpX[k] = (this->x[k] * this->m + star2.x[k] * star2.m)/tmpM;
            tmpV[k] = (this->v[k] * this->m + star2.v[k] * star2.m)/tmpM;
        }
        //delete star2;
        //star2 = nullptr;//пока без удоления НО нужно реализовать + нужно удолять еще и this

        star* temp = new star(tmpX, tmpV, tmpM);

        // temp->m = tmpM;
        // for(int k = 0; k < dim; ++k){
        //     temp->x[k] = tmpX[k];
        //     temp->v[k] = tmpV[k];
        // }

        starCounter--;
        return temp;

    }

};
int star::starCounter = 0;


star::star(){
    for(int k = 0; k < dim; ++k){
        x[k] = 0;
        v[k] = 0;
    }
    m = 0;
    changing_color();
}


star::star(double *coord, double *speed, double mass){
    for(int k = 0; k < dim; ++k){
        x[k] = coord[k];
        v[k] = speed[k];
    }
    m = mass;
    changing_color();
    //замена на функцию changing_color
    /*
    col = colStar[nColor-1];  // не годится, если будут объединения объектов, функция намного лучше
    for(int i = 0; i < nColor-1; ++i){//распределяем цвета
        if(m <= borderMass[i]){
            col = colStar[i];
            break;
        }
    }*/
    starCounter++;
}

void star::changing_color(){
    col = colStar[nColor-1];
    for(int i = 0; i < nColor-1; ++i){//распределяем цвета
        if(m <= borderMass[i]){
            col = colStar[i];
            break;
        }
    }
}

double star::changing_size(){
    for(int i = 0; i < nborderMass-1; ++i){//изменение размера в зависимости от массы обьекта
        if(m <= borderMass[i]){
            return 6 + i + 4 * !i;
        }
    }
    return 20 + 4; //если масса супер большая(больше массы солнца)
}





class galaxy{
public:
    int num;
    star **stars;
    galaxy(int n = numStars):num(n){
        stars = new star*[num];
        double x1[dim] = {0}, v1[dim] = {0};
        stars[0] = new star(x1, v1, massSun); // самый массивный объект в начале координат
        double rad;
        for(int i = 1; i < num; ++i){
            rad = 0;
            double R = rand() * systemRadius / RAND_MAX,
            fi  = (2 * M_PI * rand()) / RAND_MAX,
            theta = (M_PI * rand()) / RAND_MAX;
            x1[0] = R  * cos(fi);
            x1[1] = R  * sin(fi);
            if(dim == 3){
                x1[0] *= sin(theta);
                x1[1] *= sin(theta);
                x1[3] = R * cos(theta);
            }
            for(int k = 0; k < dim; ++k){
                rad += x1[k] * x1[k];
            }
// вторая космическая скорость
            double absV = sqrt(G * stars[0]->m / sqrt(rad)), alpha = (2 * M_PI * rand()) / RAND_MAX;
//если размерность 3, нужен еще один угол как для координат(два угла годятся и для плоскости, желающие могут сделать)
//            v1[0] = absV * cos(alpha);
//            v1[1] = absV * sin(alpha);
            v1[0] =  absV * sin(fi);
            v1[1] = -absV * cos(fi); // скорость направлена вдоль окружности с центром в начале координат
            stars[i] = new star(x1, v1, massEarth / num * (6 * i));
        }
    };
    ~galaxy(){delete[] stars;};
    double border[dim];

    void move(){
        double dist;
        double dCoord[dim];
        for(int i = 0; i < num; ++i){ // force nullification
            for(int k = 0; k < dim; ++k){
                if(stars[i]){
                    stars[i]->f[k] = 0;
                }
            }
        }
        for(int i = 0; i < num; i++){//подозрение на слепление обьектов
            if(stars[i]){
                for(int j = i + 1; j < num; j++){
                    if(i != j && stars[j]){
                        dist = 0;
                        for(int k = 0; k < dim; ++k){
                            dCoord[k] = stars[i]->x[k] - stars[j]->x[k];
                            dist += dCoord[k] * dCoord[k];
                        }
                        if(sqrt(dist) < distConnect){//
                            //замена на перегрузку +

                            stars[i] = *stars[i] + *stars[j];
                            delete stars[j];
                            stars[j] = nullptr;


                            /*double tmpM = stars[i]->m + stars[j]->m, tmpX[dim], tmpV[dim];
                            for(int k = 0; k < dim; ++k){
                                tmpX[k] = (stars[i]->x[k] * stars[i]->m + stars[j]->x[k] * stars[j]->m)/tmpM;
                                tmpV[k] = (stars[i]->v[k] * stars[i]->m + stars[j]->v[k] * stars[j]->m)/tmpM;
                            }
                            delete stars[j];
                            stars[j] = nullptr;
                            stars[i]->m = tmpM;
                            for(int k = 0; k < dim; ++k){
                                stars[i]->x[k] = tmpX[k];
                                stars[i]->v[k] = tmpV[k];
                            }*/
                        }

                    }
                }
            }
        }
        for(int i = 0; i < num; i++){//подозрение на изменение движения из-за гравитации
            if(stars[i]){
                for(int j = i + 1; j < num; j++){
                    if(i != j && stars[j]){
                        dist = 0;
                        for(int k = 0; k < dim; ++k){
                            dCoord[k] = stars[i]->x[k] - stars[j]->x[k];
                            dist += dCoord[k] * dCoord[k];
                        }
                        // dist = sqrt(dist); // для знаменателя пока квадрат, потом возьмем корень
                        for(int k = 0; k < dim; ++k){
                            double tmp = G * stars[i]->m * stars[j]->m / dist;
                            stars[i]->f[k] -= tmp * dCoord[k] / sqrt(dist);
                            stars[j]->f[k] += tmp * dCoord[k] / sqrt(dist);
                        }
                    }
                }
            }
        }
        for(int i = 0; i < num; ++i){//отвечает за движение
            if(stars[i]){
                for(int k = 0; k < dim; ++k){
                    stars[i]->v[k] += dt * stars[i]->f[k] / stars[i]->m; //можно не делить на массу, а выше суммировать ускорение
                }
                for(int k = 0; k < dim; ++k){
                    stars[i]->x[k] += dt * stars[i]->v[k];
                }
            }
        }
    }
};

#endif // STAR_H
