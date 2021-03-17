#ifndef WINWIN2_H
#define WINWIN2_H

#include <QDialog>

namespace Ui {
class winwin2;
}

class winwin2 : public QDialog
{
    Q_OBJECT

public:
    explicit winwin2(QWidget *parent = nullptr);
    ~winwin2();

private:
    Ui::winwin2 *ui;
    winwin2 *win2;
};

#endif // WINWIN2_H
