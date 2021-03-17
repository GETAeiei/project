#ifndef SPACE13_H
#define SPACE13_H

#include <QDialog>

namespace Ui {
class space13;
}

class space13 : public QDialog
{
    Q_OBJECT

public:
    explicit space13(QWidget *parent = nullptr);
    ~space13();

private:
    Ui::space13 *ui;
};

#endif // SPACE13_H
