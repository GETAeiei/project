#ifndef ENGLAND_H
#define ENGLAND_H

#include <QDialog>

namespace Ui {
class England;
}

class England : public QDialog
{
    Q_OBJECT

public:
    explicit England(QWidget *parent = nullptr);
    ~England();

private:
    Ui::England *ui;
};

#endif // ENGLAND_H
