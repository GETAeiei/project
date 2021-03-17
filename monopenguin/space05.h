#ifndef SPACE05_H
#define SPACE05_H

#include <QDialog>

namespace Ui {
class space05;
}

class space05 : public QDialog
{
    Q_OBJECT

public:
    explicit space05(QWidget *parent = nullptr);
    ~space05();

private:
    Ui::space05 *ui;
};

#endif // SPACE05_H
