#ifndef CHANCE_H
#define CHANCE_H

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

private:
    Ui::Chance *ui;
};

#endif // CHANCE_H
