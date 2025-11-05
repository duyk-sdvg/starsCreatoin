#include "mainwindow.h"
#include "math.h"

#include "ui_mainwindow.h"
//#include <cmath>
#include <QPainter>
#include <QTime>
#include <QFileDialog>
#include <QThread>
#include <QMessageBox>
#include <star.h>

const int topX0 = 100, topY0 = 100, h = 800, length = 800;
galaxy *galactika = new galaxy;

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
//    connect(ui->pushButtonStart,  SIGNAL(clicked()), this, SLOT(buttonText()));
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&MainWindow::update));
//    connect(timer, &QTimer::timeout, this, SLOT(myTimer()));
    timer->start(1);

    //таймер для отсчета системы
    systemTtime = 0;
    system_time = new QTimer(this);
    connect(system_time, SIGNAL(timeout()), this, SLOT(TimerSlot()));
    system_time->start(1000);
    //отсчет шага системы
    calculateTtime = 0;
    calculate_time = new QTimer(this);
    connect(calculate_time, SIGNAL(timeout()), this, SLOT(CalculateSlot()));
    calculate_time->start(10);

    ui->pushButtonStart->setText("Stop");

    //график
    // ui->widget->xAxis->setLabel("Масса в 1e23");
    // ui->widget->yAxis->setLabel("Кол-во объектов");
    // ui->widget->yAxis->setRange(0, numStars);
    // ui->widget->xAxis->setRange(0, massUran / 1e24);

    // double epsilon = 1e24;
    // for(int i = 0; i < galactika->num; i++){
    //     if(galactika->stars[i] != nullptr){
    //         int count = 0;
    //         for(int j = i + i; j < galactika->num; j++){
    //             if((galactika->stars[j] != nullptr) && (abs(galactika->stars[i]->m - galactika->stars[j]->m) < epsilon)){
    //                 count++;
    //             }
    //         }
    //         x.push_back(galactika->stars[i]->m / 1e23);
    //         y.push_back(count);
    //     }
    // }
    // ui->widget->addGraph();
    // ui->widget->graph(0)->addData(x,y);
    // ui->widget->replot();

    // ui->widget->setInteraction(QCP::iRangeZoom, true);
    // ui->widget->setInteraction(QCP::iRangeDrag, true);

}
MainWindow::~MainWindow(){
    delete ui;
}

/*void MainWindow::buttonText(){
    if(ui->pushButtonStart->text()==textB[0]){
        ui->pushButtonStart->setText(textB[1]);
        connect(timer, &QTimer::timeout, this, QOverload<>::of(&MainWindow::update));
    }else{
        ui->pushButtonStart->setText(textB[0]);
        disconnect(timer, &QTimer::timeout, this, QOverload<>::of(&MainWindow::update));
    }
    return;
}*/




void MainWindow::TimerSlot()//таймер для отсчета системы
{
    systemTtime++;
    ui->time_system->setText(QString::number(systemTtime));

    //график

    ui->widget->clearGraphs();
    ui->widget->clearPlottables();
    ui->widget->clearItems();
    x.clear();
    y.clear();

    ui->widget->xAxis->setLabel("Масса в 1e23");
    ui->widget->yAxis->setLabel("Кол-во объектов");
    ui->widget->yAxis->setRange(0, numStars);
    ui->widget->xAxis->setRange(0, massUran / 1e24);

    double epsilon = 0.9e25;
    for(int i = 0; i < galactika->num; i++){
        if(galactika->stars[i] != nullptr){
            int count = 0;
            for(int j = i + i; j < galactika->num; j++){
                if((galactika->stars[j] != nullptr) && (abs(galactika->stars[i]->m - galactika->stars[j]->m) < epsilon)){
                    count++;
                }
            }
            x.push_back(galactika->stars[i]->m / 1e23);
            y.push_back(count);
        }
    }
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();

    ui->widget->setInteraction(QCP::iRangeZoom, true);
    ui->widget->setInteraction(QCP::iRangeDrag, true);
}

void MainWindow::CalculateSlot()//отсчет шага системы
{
    calculateTtime++;
    ui->tima_calculation->setText(QString::number(calculateTtime));

    int intdex_Max_mass1 = 0;
    int intdex_Max_mass2 = 0;
    int intdex_Max_mass3 = 0;
    double max_mass1 = 0;
    double max_mass2 = 0;
    double max_mass3 = 0;
    double max_mass4 = 0;
    double p_res = 0, l_z = 0;
    for(int i = 0; i < galactika->num;i++){
        double p_x = 0, p_y = 0;
        if(galactika->stars[i] != nullptr){//вычисление общего импульса системы
            p_x = galactika->stars[i]->m * galactika->stars[i]->v[0];
            p_y = galactika->stars[i]->m * galactika->stars[i]->v[1];
            p_res += sqrt(p_x * p_x + p_y * p_y);//импульс
            l_z += p_y * galactika->stars[i]->v[0] - p_x * galactika->stars[i]->v[1];//момент импульса
        }
        if(galactika->stars[i] != nullptr){//вычисление самых массивных объектов
            if(galactika->stars[i]->m < max_mass4){
                continue;
            }
            else if(galactika->stars[i]->m >= max_mass1){
                max_mass4 = max_mass3;

                max_mass3 = max_mass2;
                intdex_Max_mass3 = intdex_Max_mass2;

                max_mass2 = max_mass1;
                intdex_Max_mass2 = intdex_Max_mass1;

                max_mass1 = galactika->stars[i]->m;
                intdex_Max_mass1 = i;
            }
            else if(galactika->stars[i]->m >= max_mass2){
                max_mass4 = max_mass3;

                max_mass3 = max_mass2;
                intdex_Max_mass3 = intdex_Max_mass2;

                max_mass2 = galactika->stars[i]->m;
                intdex_Max_mass2 = i;
            }
            else if(galactika->stars[i]->m >= max_mass3){
                max_mass4 = max_mass3;

                max_mass3 = galactika->stars[i]->m;
                intdex_Max_mass3 = i;
            }
        }
    }
    double dx, dy, r, U_rez = 0, K_rez = 0, E_full = 0;
    for(int i = 0; i < galactika->num;i++){//потенциальная и кинетическая энергия
        if(galactika->stars[i] != nullptr){
            double v_i = galactika->stars[i]->x[0]*galactika->stars[i]->x[0] + galactika->stars[i]->x[1]*galactika->stars[i]->x[1];
            K_rez += (galactika->stars[i]->m * v_i) / 2;
            for(int j = i + 1; j < galactika->num;j++){
                 if(galactika->stars[j] != nullptr){
                    dx = galactika->stars[i]->x[0] - galactika->stars[j]->x[0];
                    dy = galactika->stars[i]->x[1] - galactika->stars[j]->x[1];
                    r = sqrt(dx*dx + dy*dy);
                    if(r < systemRadius){
                        U_rez = -G * galactika->stars[i]->m * galactika->stars[j]->m / r;
                    }
                 }
            }
        }
    }
    E_full += U_rez + K_rez;

    ui->obj1_mass_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass1]->m));
    ui->obj1_corX_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass1]->x[0]));
    ui->obj1_corY_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass1]->x[1]));
    ui->obj1_speedX_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass1]->v[0]));
    ui->obj1_speedY_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass1]->v[1]));

    ui->obj2_mass_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass2]->m));
    ui->obj2_corX_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass2]->x[0]));
    ui->obj2_corY_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass2]->x[1]));
    ui->obj2_speedX_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass2]->v[0]));
    ui->obj2_speedY_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass2]->v[1]));
    if(galactika->num > 2){
        ui->obj3_mass_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass3]->m));
        ui->obj3_corX_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass3]->x[0]));
        ui->obj3_corY_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass3]->x[1]));
        ui->obj3_speedX_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass3]->v[0]));
        ui->obj3_speedY_lineEdit->setText(QString::number(galactika->stars[intdex_Max_mass3]->v[1]));
    }
    else{
        ui->obj3_mass_lineEdit->setText(QString::number(0));
        ui->obj3_corX_lineEdit->setText(QString::number(0));
        ui->obj3_corY_lineEdit->setText(QString::number(0));
        ui->obj3_speedX_lineEdit->setText(QString::number(0));
        ui->obj3_speedY_lineEdit->setText(QString::number(0));
    }

    ui->impulse_lineEdit->setText(QString::number(p_res));
    ui->impuls_moment_lineEdit->setText(QString::number(l_z));
    ui->potencial_lineEdit->setText(QString::number(U_rez));
    ui->kinetic_lineEdit->setText(QString::number(K_rez));
    ui->full_energ_lineEdit->setText(QString::number(E_full));
}



void MainWindow::paintEvent(QPaintEvent *e) {
  Q_UNUSED(e);
  QPainter painter(this);
  QPen pen(Qt::black, 1, Qt::SolidLine);
  painter.setPen(pen);

//  QTime time = QTime::currentTime();
//  int mSec = time.msec();
//  int Sec = time.second();

  QBrush brush;//(Qt::yellow);
  brush.setStyle(Qt::SolidPattern);

  double coefX = length / 2 / 1e12; // system radius
  int centerX = length / 2;

  if (galactika->num != numStars || ((secondsystemRadius != systemRadius) && (secondsystemRadius != 0))
      || ((seconddistConnect != distConnect) && (seconddistConnect != 0))) {//

      if(seconddistConnect != distConnect && seconddistConnect != 0) distConnect = seconddistConnect;

      if(secondsystemRadius != systemRadius && secondsystemRadius != 0) systemRadius = secondsystemRadius;


      // Автоматически обновляем количество звезд в галактике
      galactika->resize();


  }

  for(int i = 0; i < galactika->num; ++i){
      if(galactika->stars[i]){
          brush.setColor(galactika->stars[i]->col);
          if(!i) brush.setColor(Qt::yellow);
          painter.setBrush(brush);
          for(int k = 0; k < 2; ++k){
             // условие не рисовать вне квадрата
             /* if(galactika->stars[i]->x[0] * coefX + centerX + topX0 > 0 &&
                 galactika->stars[i]->x[0] * coefX + centerX  < length &&
                 galactika->stars[i]->x[1] * coefX + centerX + topY0 > 0 &&
                 galactika->stars[i]->x[1] * coefX + centerX  < h) */
                    painter.drawEllipse(galactika->stars[i]->x[0] * coefX + centerX + topX0 - galactika->stars[i]->changing_size()/2,//размер поля
                                        galactika->stars[i]->x[1] * coefX + centerX + topY0 - galactika->stars[i]->changing_size()/2,
                                 galactika->stars[i]->changing_size(), galactika->stars[i]->changing_size());//размер шариков
          }
      }
  }
  galactika->move();

  ui->lineEdit->setText(QString::number(star::starCounter));
  //ui->lineEdit_2->setText(QString::number(galactika->stars[0]->m));
  //ui->lineEdit_3->setText(QString::number(galactika->stars[0]->x[0]));

  double sum_Mass = 0;
  for(int i = 0; i < galactika->num;i++){
      if(galactika->stars[i]) sum_Mass+= galactika->stars[i]->m;
  }
  ui->sum_mass_lineEdit->setText(QString::number(sum_Mass));


}

// void MainWindow::update(){

// }

void MainWindow::on_pushButtonStart_clicked()
{
    flag = !flag;
    if(flag){
        ui->pushButtonStart->setText("Start");
        timer->stop();
        system_time->stop();
        calculate_time->stop();
    }
    else{
        ui->pushButtonStart->setText("Stop");
        timer->start(1);
        system_time->start(1000);
        calculate_time->start(1);
    }

}


void MainWindow::on_save_Button_clicked()
{
    timer->stop();
    system_time->stop();
    calculate_time->stop();


    ofstream fout;
    fout.open("test.txt");//C:\Users\galeh\OneDrive\Desktop\proga\starsCreation\build\5_15_17_mingw64_static-Debug

    fout << "numStars:" << '\n';
    fout << numStars << '\n';
    fout << "starCounter:" << '\n';
    fout << star::starCounter << '\n';
    fout << "systemRadius:" << '\n';
    fout << systemRadius << '\n';
    fout << "distConnect"<< '\n';
    fout << distConnect << '\n';

    fout << galactika;
    fout.close();
    QThread::sleep(5);

    timer->start(1);
    system_time->start(1000);
    calculate_time->start(1);
}


void MainWindow::on_load_Button_clicked()
{
    timer->stop();
    system_time->stop();
    calculate_time->stop();


    ifstream fin;
    fin.open("test.txt");//C:\Users\galeh\OneDrive\Desktop\proga\starsCreation\build\5_15_17_mingw64_static-Debug

    fin >> galactika;
    fin.close();
    QThread::sleep(5);

    timer->start(1);
    system_time->start(1000);
    calculate_time->start(1);
}


void MainWindow::on_num_obj_lineEdit_returnPressed()
{
    QString text = ui->num_obj_lineEdit->text();
    numStars = text.toInt();
}


void MainWindow::on_size_obl_lineEdit_returnPressed()
{
    QString text = ui->size_obl_lineEdit->text();
    secondsystemRadius = text.toDouble();

}


void MainWindow::on_dist_sum_lineEdit_returnPressed()
{
    QString text = ui->dist_sum_lineEdit->text();
    seconddistConnect = text.toDouble();/*
    QMessageBox::information(this, "Успех",
                             QString("Вы ввели число: %1").arg(seconddistConnect));*/
}

