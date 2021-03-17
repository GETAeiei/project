#ifndef SPACE10_H
#define SPACE10_H

#include <QDialog>

namespace Ui {
class space10;
}

class space10 : public QDialog
{
    Q_OBJECT

public:
    explicit space10(QWidget *parent = nullptr);
    ~space10();

private:
    Ui::space10 *ui;
};

#endif // SPACE10_H
