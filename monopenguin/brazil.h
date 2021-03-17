#ifndef BRAZIL_H
#define BRAZIL_H

#include <QDialog>

namespace Ui {
class Brazil;
}

class Brazil : public QDialog
{
    Q_OBJECT

public:
    explicit Brazil(QWidget *parent = nullptr);
    ~Brazil();

private:
    Ui::Brazil *ui;
};

#endif // BRAZIL_H
