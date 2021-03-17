#ifndef SPACE03_H
#define SPACE03_H

#include <QDialog>

namespace Ui {
class space03;
}

class space03 : public QDialog
{
    Q_OBJECT

public:
    explicit space03(QWidget *parent = nullptr);
    ~space03();

private:
    Ui::space03 *ui;
};

#endif // SPACE03_H
