#ifndef SPACE_H
#define SPACE_H
#include "special.h"
#include <QDialog>

namespace Ui {
class space;
}

class space : public QDialog
{
    Q_OBJECT

public:
    explicit space(QWidget *parent = nullptr);
    ~space();

    bool buystreet();

private slots:
    void on_pushButton_2_clicked();

    void on_not_clicked();

    void on_buy_clicked();

    void on_notbuy_clicked();

private:
    Ui::space *ui;
};

#endif // SPACE_H
