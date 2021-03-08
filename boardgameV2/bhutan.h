#ifndef BHUTAN_H
#define BHUTAN_H

#include <QDialog>

namespace Ui {
class Bhutan;
}

class Bhutan : public QDialog
{
    Q_OBJECT

public:
    explicit Bhutan(QWidget *parent = nullptr);
    ~Bhutan();

private:
    Ui::Bhutan *ui;
};

#endif // BHUTAN_H
