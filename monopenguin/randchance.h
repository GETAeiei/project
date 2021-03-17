#ifndef RANDCHANCE_H
#define RANDCHANCE_H

#include <QDialog>

namespace Ui {
class Randchance;
}

class Randchance : public QDialog
{
    Q_OBJECT

public:
    explicit Randchance(QWidget *parent = nullptr);
    ~Randchance();
    int random_chance;

private:
    Ui::Randchance *ui;
};

#endif // RANDCHANCE_H
