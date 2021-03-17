#ifndef SPACE20_H
#define SPACE20_H

#include <QDialog>

namespace Ui {
class space20;
}

class space20 : public QDialog
{
    Q_OBJECT

public:
    explicit space20(QWidget *parent = nullptr);
    ~space20();

private:
    Ui::space20 *ui;
};

#endif // SPACE20_H
