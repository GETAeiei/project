#ifndef SPACE12_H
#define SPACE12_H

#include <QDialog>

namespace Ui {
class space12;
}

class space12 : public QDialog
{
    Q_OBJECT

public:
    explicit space12(QWidget *parent = nullptr);
    ~space12();

private:
    Ui::space12 *ui;
};

#endif // SPACE12_H
