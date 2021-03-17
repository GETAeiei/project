#ifndef SPACE01_H
#define SPACE01_H

#include <QDialog>

namespace Ui {
class space01;
}

class space01 : public QDialog
{
    Q_OBJECT

public:
    explicit space01(QWidget *parent = nullptr);
    ~space01();

private:
    Ui::space01 *ui;
};

#endif // SPACE01_H
