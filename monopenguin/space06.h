#ifndef SPACE06_H
#define SPACE06_H

#include <QDialog>

namespace Ui {
class space06;
}

class space06 : public QDialog
{
    Q_OBJECT

public:
    explicit space06(QWidget *parent = nullptr);
    ~space06();

private:
    Ui::space06 *ui;
};

#endif // SPACE06_H
