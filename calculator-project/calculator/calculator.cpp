#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));

    QPushButton *numButtons[10];
    for(int i = 0; i < 10; i++) {
        QString buttonName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(buttonName);
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }
}

Calculator::~Calculator()
{
    delete ui;
}


void Calculator::NumPressed() {
    QPushButton *button = static_cast<QPushButton *>(sender());
    QString buttonVal = button->text();
    QString displayVal = ui->Display->text();

    if((displayVal.toDouble() == 0.0) || (displayVal.toInt() == 0)) {
        ui->Display->setText(buttonVal);
    }
    else {
        QString newVal = displayVal + buttonVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}
