#ifndef SPACE_H
#define SPACE_H
#include "special.h"

#include <QDialog>

namespace Ui {
class Space;
}

class Space : public QDialog
{
    Q_OBJECT

public:
    explicit Space(QWidget *parent = nullptr);
    ~Space();
    int property(int num_space);

private:
    Ui::Space *ui;
    //sorry for wrong word
    Special *spacial;
};

#endif // SPACE_H
