#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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

protected:
    void paintEvent(QPaintEvent *event);

private slots:
    //void buttonText();

    //
    void TimerSlot();
    void CalculateSlot();
    //
    void on_pushButtonStart_clicked();
};

#endif // MAINWINDOW_H
