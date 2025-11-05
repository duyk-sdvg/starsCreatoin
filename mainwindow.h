#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool ellipse = false;
    const QString textB[2] = {"Start", "Stop"};
    QTimer *timer = new QTimer(this);
    //таймер для отсчета системы
    QTimer *system_time;
    int systemTtime;
    //отсчет шага системы
    QTimer *calculate_time;
    int calculateTtime;


private:
    Ui::MainWindow *ui;
    bool flag = false;
    double xBegin, xEnd, h, X;//xBegin - начало промежутка, xEnd - конец, h - шаг между двумя точками, Х - врем перемен с помощью котор заполн вектор
    int N;// кол во точек
    QVector<double> x = {0}, y = {0};// для хранения точек

protected:
    void paintEvent(QPaintEvent *event);
    //void update();

private slots:
    //void buttonText();

    //
    void TimerSlot();
    void CalculateSlot();
    //
    void on_pushButtonStart_clicked();
    void on_save_Button_clicked();
    void on_load_Button_clicked();
    void on_num_obj_lineEdit_returnPressed();
    void on_size_obl_lineEdit_returnPressed();
    void on_dist_sum_lineEdit_returnPressed();
};

#endif // MAINWINDOW_H
