#ifndef SPACE02_H
#define SPACE02_H

#include <QDialog>

namespace Ui {
class space02;
}

class space02 : public QDialog
{
    Q_OBJECT

public:
    explicit space02(QWidget *parent = nullptr);
    ~space02();

private:
    Ui::space02 *ui;
};

#endif // SPACE02_H
