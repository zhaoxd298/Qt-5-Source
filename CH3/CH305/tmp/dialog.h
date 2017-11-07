#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "ui_dialog.h"
#include <QTimer>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog, public Ui::Dialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // DIALOG_H
