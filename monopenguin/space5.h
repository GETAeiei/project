#ifndef SPACE5_H
#define SPACE5_H

#include <QDialog>

namespace Ui {
class space5;
}

class space5 : public QDialog
{
    Q_OBJECT

public:
    explicit space5(QWidget *parent = nullptr);
    ~space5();

private:
    Ui::space5 *ui;
};

#endif // SPACE5_H
