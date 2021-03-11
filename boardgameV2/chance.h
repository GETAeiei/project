#ifndef CHANCE_H
#define CHANCE_H
#include "randchance.h"

#include <QDialog>

namespace Ui {
class Chance;
}

class Chance : public QDialog
{
    Q_OBJECT

public:
    explicit Chance(QWidget *parent = nullptr);
    ~Chance();
    int random_chance;

private slots:
    void on_pushButton_clicked();

private:
    Ui::Chance *ui;
    Randchance *randchance;
};

#endif // CHANCE_H
