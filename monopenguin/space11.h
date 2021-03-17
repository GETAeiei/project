#ifndef SPACE11_H
#define SPACE11_H

#include <QDialog>

namespace Ui {
class space11;
}

class space11 : public QDialog
{
    Q_OBJECT

public:
    explicit space11(QWidget *parent = nullptr);
    ~space11();

private:
    Ui::space11 *ui;
};

#endif // SPACE11_H
