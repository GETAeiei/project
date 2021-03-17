#ifndef USA_H
#define USA_H

#include <QDialog>

namespace Ui {
class USA;
}

class USA : public QDialog
{
    Q_OBJECT

public:
    explicit USA(QWidget *parent = nullptr);
    ~USA();

private:
    Ui::USA *ui;
};

#endif // USA_H
