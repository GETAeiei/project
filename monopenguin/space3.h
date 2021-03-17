#ifndef SPACE3_H
#define SPACE3_H

#include <QDialog>

namespace Ui {
class space3;
}

class space3 : public QDialog
{
    Q_OBJECT

public:
    explicit space3(QWidget *parent = nullptr);
    ~space3();

private:
    Ui::space3 *ui;
};

#endif // SPACE3_H
