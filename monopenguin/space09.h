#ifndef SPACE09_H
#define SPACE09_H

#include <QDialog>

namespace Ui {
class space09;
}

class space09 : public QDialog
{
    Q_OBJECT

public:
    explicit space09(QWidget *parent = nullptr);
    ~space09();

private:
    Ui::space09 *ui;
};

#endif // SPACE09_H
