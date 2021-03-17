#ifndef SPACE16_H
#define SPACE16_H

#include <QDialog>

namespace Ui {
class space16;
}

class space16 : public QDialog
{
    Q_OBJECT

public:
    explicit space16(QWidget *parent = nullptr);
    ~space16();

private:
    Ui::space16 *ui;
};

#endif // SPACE16_H
