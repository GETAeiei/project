#ifndef SPACE08_H
#define SPACE08_H

#include <QDialog>

namespace Ui {
class space08;
}

class space08 : public QDialog
{
    Q_OBJECT

public:
    explicit space08(QWidget *parent = nullptr);
    ~space08();

private:
    Ui::space08 *ui;
};

#endif // SPACE08_H
