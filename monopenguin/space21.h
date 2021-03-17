#ifndef SPACE21_H
#define SPACE21_H

#include <QDialog>

namespace Ui {
class space21;
}

class space21 : public QDialog
{
    Q_OBJECT

public:
    explicit space21(QWidget *parent = nullptr);
    ~space21();

private:
    Ui::space21 *ui;
};

#endif // SPACE21_H
