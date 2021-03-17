#ifndef SPACE14_H
#define SPACE14_H

#include <QDialog>

namespace Ui {
class space14;
}

class space14 : public QDialog
{
    Q_OBJECT

public:
    explicit space14(QWidget *parent = nullptr);
    ~space14();

private:
    Ui::space14 *ui;
};

#endif // SPACE14_H
