#ifndef BUYORNOT_H
#define BUYORNOT_H

#include <QDialog>

namespace Ui {
class buyORnot;
}

class buyORnot : public QDialog
{
    Q_OBJECT

public:
    explicit buyORnot(QWidget *parent = nullptr);
    ~buyORnot();
    int P1_buy();
    int buy_play1;

private slots:

    int on_buy_clicked();

    void on_not_clicked();

private:
    Ui::buyORnot *ui;
    buyORnot *myques;
};

#endif // BUYORNOT_H
