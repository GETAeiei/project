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

private slots:
    void on_buy_clicked(bool checked);

    void on_buy_clicked();

    void on_not_clicked();

private:
    Ui::buyORnot *ui;
};

#endif // BUYORNOT_H
