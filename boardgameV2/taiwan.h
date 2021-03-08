#ifndef TAIWAN_H
#define TAIWAN_H

#include <QDialog>

namespace Ui {
class Taiwan;
}

class Taiwan : public QDialog
{
    Q_OBJECT

public:
    explicit Taiwan(QWidget *parent = nullptr);
    ~Taiwan();

private:
    Ui::Taiwan *ui;
};

#endif // TAIWAN_H
