#ifndef SWIS_H
#define SWIS_H

#include <QDialog>

namespace Ui {
class Swis;
}

class Swis : public QDialog
{
    Q_OBJECT

public:
    explicit Swis(QWidget *parent = nullptr);
    ~Swis();

private:
    Ui::Swis *ui;
};

#endif // SWIS_H
