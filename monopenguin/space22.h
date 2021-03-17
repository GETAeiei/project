#ifndef SPACE22_H
#define SPACE22_H

#include <QDialog>

namespace Ui {
class space22;
}

class space22 : public QDialog
{
    Q_OBJECT

public:
    explicit space22(QWidget *parent = nullptr);
    ~space22();

private:
    Ui::space22 *ui;
};

#endif // SPACE22_H
