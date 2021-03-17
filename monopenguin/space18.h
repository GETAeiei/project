#ifndef SPACE18_H
#define SPACE18_H

#include <QDialog>

namespace Ui {
class space18;
}

class space18 : public QDialog
{
    Q_OBJECT

public:
    explicit space18(QWidget *parent = nullptr);
    ~space18();

private:
    Ui::space18 *ui;
};

#endif // SPACE18_H
