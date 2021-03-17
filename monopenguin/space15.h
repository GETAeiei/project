#ifndef SPACE15_H
#define SPACE15_H

#include <QDialog>

namespace Ui {
class space15;
}

class space15 : public QDialog
{
    Q_OBJECT

public:
    explicit space15(QWidget *parent = nullptr);
    ~space15();

private:
    Ui::space15 *ui;
};

#endif // SPACE15_H
