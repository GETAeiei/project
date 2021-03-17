#ifndef SPACE4_H
#define SPACE4_H

#include <QDialog>

namespace Ui {
class space4;
}

class space4 : public QDialog
{
    Q_OBJECT

public:
    explicit space4(QWidget *parent = nullptr);
    ~space4();

private:
    Ui::space4 *ui;
};

#endif // SPACE4_H
