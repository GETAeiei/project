#ifndef SPACE_H
#define SPACE_H
#include "special.h"
#include <QDialog>

namespace Ui {
class space;
}

class space : public QDialog
{
    Q_OBJECT

public:
    explicit space(QWidget *parent = nullptr);
    ~space();


private:
    Ui::space *ui;
};

#endif // SPACE_H
