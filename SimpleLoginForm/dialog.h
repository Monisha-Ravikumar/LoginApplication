#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_confirm_pushButton_clicked();

    void on_Exit_pushButton_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H