#ifndef TAX_H
#define TAX_H

#include <QDialog>
#include <iostream>
#include <cstdlib>
#include <string>


namespace Ui {
class Tax;
}

class Tax : public QDialog
{
    Q_OBJECT

public:
    explicit Tax(QWidget *parent = nullptr);
    ~Tax();
    int num1,num2,result;
    QString get_answer;
    int on_check_clicked();



private slots:
    void on_num1_textChanged();



private:
    Ui::Tax *ui;
};

#endif // TAX_H
