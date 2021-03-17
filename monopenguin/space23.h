#ifndef SPACE23_H
#define SPACE23_H

#include <QDialog>

namespace Ui {
class space23;
}

class space23 : public QDialog
{
    Q_OBJECT

public:
    explicit space23(QWidget *parent = nullptr);
    ~space23();

private:
    Ui::space23 *ui;
};

#endif // SPACE23_H
