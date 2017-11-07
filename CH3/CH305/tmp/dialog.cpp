#include "dialog.h"
#include <QDebug>
#include <QTime>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);

}

Dialog::~Dialog()
{
}

void Dialog::on_pushButton_clicked()
{
    //QWidget *cur_stacked = stackedWidget->currentWidget();
    int index = stackedWidget->currentIndex();

    if (0 == index) {
        qDebug() << user_name_edit->text();
    }

}

void Dialog::on_pushButton_2_clicked()
{
    this->close();
}
