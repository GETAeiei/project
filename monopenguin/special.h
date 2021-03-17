#ifndef SPECIAL_H
#define SPECIAL_H

#include <QDialog>

namespace Ui {
class special;
}

class special : public QDialog
{
    Q_OBJECT

public:
    explicit special(QWidget *parent = nullptr);
    ~special();

private:
    Ui::special *ui;
};

#endif // SPECIAL_H
