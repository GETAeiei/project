#ifndef SPACE1_H
#define SPACE1_H

#include <QDialog>

namespace Ui {
class space1;
}

class space1 : public QDialog
{
    Q_OBJECT

public:
    explicit space1(QWidget *parent = nullptr);
    ~space1();

private:
    Ui::space1 *ui;
};

#endif // SPACE1_H
