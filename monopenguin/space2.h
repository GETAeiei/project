#ifndef SPACE2_H
#define SPACE2_H

#include <QDialog>

namespace Ui {
class space2;
}

class space2 : public QDialog
{
    Q_OBJECT

public:
    explicit space2(QWidget *parent = nullptr);
    ~space2();

private:
    Ui::space2 *ui;
};

#endif // SPACE2_H
