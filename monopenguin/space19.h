#ifndef SPACE19_H
#define SPACE19_H

#include <QDialog>

namespace Ui {
class space19;
}

class space19 : public QDialog
{
    Q_OBJECT

public:
    explicit space19(QWidget *parent = nullptr);
    ~space19();

private:
    Ui::space19 *ui;
};

#endif // SPACE19_H
