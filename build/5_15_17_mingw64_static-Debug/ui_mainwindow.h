/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNEW;
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *time_system;
    QLabel *label_2;
    QLineEdit *tima_calculation;
    QLabel *label_3;
    QLineEdit *sum_mass_lineEdit;
    QLabel *label_27;
    QLineEdit *impulse_lineEdit;
    QLabel *label_28;
    QLineEdit *impuls_moment_lineEdit;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *obj1_mass_lineEdit;
    QLabel *label_5;
    QLineEdit *obj1_corX_lineEdit;
    QLabel *label_7;
    QLineEdit *obj1_corY_lineEdit;
    QLabel *label_6;
    QLineEdit *obj1_speedX_lineEdit;
    QLabel *label_24;
    QLineEdit *obj1_speedY_lineEdit;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_4;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *obj2_mass_lineEdit;
    QLineEdit *obj2_corX_lineEdit;
    QLineEdit *obj2_speedX_lineEdit;
    QLabel *label_15;
    QLineEdit *obj2_corY_lineEdit;
    QLineEdit *obj2_speedY_lineEdit;
    QLabel *label_25;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_6;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *obj3_mass_lineEdit;
    QLineEdit *obj3_corX_lineEdit;
    QLineEdit *obj3_speedX_lineEdit;
    QLabel *label_23;
    QLineEdit *obj3_corY_lineEdit;
    QLineEdit *obj3_speedY_lineEdit;
    QLabel *label_26;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *save_Button;
    QPushButton *load_Button;
    QPushButton *pushButtonStart;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_32;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QFormLayout *formLayout_7;
    QLineEdit *potencial_lineEdit;
    QLabel *label_30;
    QLineEdit *kinetic_lineEdit;
    QLabel *label_31;
    QLineEdit *full_energ_lineEdit;
    QLabel *label_29;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1417, 818);
        actionNEW = new QAction(MainWindow);
        actionNEW->setObjectName(QString::fromUtf8("actionNEW"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 0, 261, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        time_system = new QLineEdit(formLayoutWidget);
        time_system->setObjectName(QString::fromUtf8("time_system"));

        formLayout->setWidget(0, QFormLayout::FieldRole, time_system);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        tima_calculation = new QLineEdit(formLayoutWidget);
        tima_calculation->setObjectName(QString::fromUtf8("tima_calculation"));

        formLayout->setWidget(1, QFormLayout::FieldRole, tima_calculation);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        sum_mass_lineEdit = new QLineEdit(formLayoutWidget);
        sum_mass_lineEdit->setObjectName(QString::fromUtf8("sum_mass_lineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, sum_mass_lineEdit);

        label_27 = new QLabel(formLayoutWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_27);

        impulse_lineEdit = new QLineEdit(formLayoutWidget);
        impulse_lineEdit->setObjectName(QString::fromUtf8("impulse_lineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, impulse_lineEdit);

        label_28 = new QLabel(formLayoutWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_28);

        impuls_moment_lineEdit = new QLineEdit(formLayoutWidget);
        impuls_moment_lineEdit->setObjectName(QString::fromUtf8("impuls_moment_lineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, impuls_moment_lineEdit);

        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(1060, 0, 231, 170));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        obj1_mass_lineEdit = new QLineEdit(formLayoutWidget_2);
        obj1_mass_lineEdit->setObjectName(QString::fromUtf8("obj1_mass_lineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, obj1_mass_lineEdit);

        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        obj1_corX_lineEdit = new QLineEdit(formLayoutWidget_2);
        obj1_corX_lineEdit->setObjectName(QString::fromUtf8("obj1_corX_lineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, obj1_corX_lineEdit);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        obj1_corY_lineEdit = new QLineEdit(formLayoutWidget_2);
        obj1_corY_lineEdit->setObjectName(QString::fromUtf8("obj1_corY_lineEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, obj1_corY_lineEdit);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_6);

        obj1_speedX_lineEdit = new QLineEdit(formLayoutWidget_2);
        obj1_speedX_lineEdit->setObjectName(QString::fromUtf8("obj1_speedX_lineEdit"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, obj1_speedX_lineEdit);

        label_24 = new QLabel(formLayoutWidget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_24);

        obj1_speedY_lineEdit = new QLineEdit(formLayoutWidget_2);
        obj1_speedY_lineEdit->setObjectName(QString::fromUtf8("obj1_speedY_lineEdit"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, obj1_speedY_lineEdit);

        formLayoutWidget_3 = new QWidget(centralwidget);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(1060, 180, 231, 170));
        formLayout_4 = new QFormLayout(formLayoutWidget_3);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(formLayoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(formLayoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_14);

        obj2_mass_lineEdit = new QLineEdit(formLayoutWidget_3);
        obj2_mass_lineEdit->setObjectName(QString::fromUtf8("obj2_mass_lineEdit"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, obj2_mass_lineEdit);

        obj2_corX_lineEdit = new QLineEdit(formLayoutWidget_3);
        obj2_corX_lineEdit->setObjectName(QString::fromUtf8("obj2_corX_lineEdit"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, obj2_corX_lineEdit);

        obj2_speedX_lineEdit = new QLineEdit(formLayoutWidget_3);
        obj2_speedX_lineEdit->setObjectName(QString::fromUtf8("obj2_speedX_lineEdit"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, obj2_speedX_lineEdit);

        label_15 = new QLabel(formLayoutWidget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_15);

        obj2_corY_lineEdit = new QLineEdit(formLayoutWidget_3);
        obj2_corY_lineEdit->setObjectName(QString::fromUtf8("obj2_corY_lineEdit"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, obj2_corY_lineEdit);

        obj2_speedY_lineEdit = new QLineEdit(formLayoutWidget_3);
        obj2_speedY_lineEdit->setObjectName(QString::fromUtf8("obj2_speedY_lineEdit"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, obj2_speedY_lineEdit);

        label_25 = new QLabel(formLayoutWidget_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_25);

        formLayoutWidget_4 = new QWidget(centralwidget);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(1060, 360, 231, 170));
        formLayout_6 = new QFormLayout(formLayoutWidget_4);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(formLayoutWidget_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_20);

        label_21 = new QLabel(formLayoutWidget_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_21);

        label_22 = new QLabel(formLayoutWidget_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, label_22);

        obj3_mass_lineEdit = new QLineEdit(formLayoutWidget_4);
        obj3_mass_lineEdit->setObjectName(QString::fromUtf8("obj3_mass_lineEdit"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, obj3_mass_lineEdit);

        obj3_corX_lineEdit = new QLineEdit(formLayoutWidget_4);
        obj3_corX_lineEdit->setObjectName(QString::fromUtf8("obj3_corX_lineEdit"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, obj3_corX_lineEdit);

        obj3_speedX_lineEdit = new QLineEdit(formLayoutWidget_4);
        obj3_speedX_lineEdit->setObjectName(QString::fromUtf8("obj3_speedX_lineEdit"));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, obj3_speedX_lineEdit);

        label_23 = new QLabel(formLayoutWidget_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_23);

        obj3_corY_lineEdit = new QLineEdit(formLayoutWidget_4);
        obj3_corY_lineEdit->setObjectName(QString::fromUtf8("obj3_corY_lineEdit"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, obj3_corY_lineEdit);

        obj3_speedY_lineEdit = new QLineEdit(formLayoutWidget_4);
        obj3_speedY_lineEdit->setObjectName(QString::fromUtf8("obj3_speedY_lineEdit"));

        formLayout_6->setWidget(4, QFormLayout::FieldRole, obj3_speedY_lineEdit);

        label_26 = new QLabel(formLayoutWidget_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        formLayout_6->setWidget(4, QFormLayout::LabelRole, label_26);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(630, 0, 160, 103));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        save_Button = new QPushButton(verticalLayoutWidget);
        save_Button->setObjectName(QString::fromUtf8("save_Button"));

        verticalLayout->addWidget(save_Button);

        load_Button = new QPushButton(verticalLayoutWidget);
        load_Button->setObjectName(QString::fromUtf8("load_Button"));

        verticalLayout->addWidget(load_Button);

        pushButtonStart = new QPushButton(centralwidget);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(630, 120, 158, 29));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(320, 120, 221, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(widget);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout->addWidget(label_32);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(280, 0, 310, 101));
        formLayout_7 = new QFormLayout(widget1);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        potencial_lineEdit = new QLineEdit(widget1);
        potencial_lineEdit->setObjectName(QString::fromUtf8("potencial_lineEdit"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, potencial_lineEdit);

        label_30 = new QLabel(widget1);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_30);

        kinetic_lineEdit = new QLineEdit(widget1);
        kinetic_lineEdit->setObjectName(QString::fromUtf8("kinetic_lineEdit"));

        formLayout_7->setWidget(1, QFormLayout::FieldRole, kinetic_lineEdit);

        label_31 = new QLabel(widget1);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        formLayout_7->setWidget(2, QFormLayout::LabelRole, label_31);

        full_energ_lineEdit = new QLineEdit(widget1);
        full_energ_lineEdit->setObjectName(QString::fromUtf8("full_energ_lineEdit"));

        formLayout_7->setWidget(2, QFormLayout::FieldRole, full_energ_lineEdit);

        label_29 = new QLabel(widget1);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_29);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1417, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNEW->setText(QCoreApplication::translate("MainWindow", "NEW", nullptr));
#if QT_CONFIG(tooltip)
        actionNEW->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>new text</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 (c)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 \321\200\320\260\321\201\321\207\320\265\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\201\320\260 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\320\277\321\203\320\273\321\214\321\201 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\274\320\265\320\275\321\202 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\201\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 Y", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 X", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 Y", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\201\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 X", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 X", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 Y", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 Y", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\201\320\260", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 X", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 X", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 Y", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 Y", nullptr));
        save_Button->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\201\320\270\321\201\321\202\320\265\320\274\321\203", nullptr));
        load_Button->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\201\320\270\321\201\321\202\320\265\320\274\321\203", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\267\320\262\320\265\320\267\320\264", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "\320\232\320\270\320\275\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \321\215\320\275\320\265\321\200\320\263\320\270\321\217", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\275\320\260\321\217 \321\215\320\275\320\265\321\200\320\263\320\270\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\202\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\320\260\321\217 \321\215\320\275\320\265\321\200\320\263\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
