#ifndef TAX_H
#define TAX_H

#include <QDialog>

namespace Ui {
class Tax;
}

class Tax : public QDialog
{
    Q_OBJECT

public:
    explicit Tax(QWidget *parent = nullptr);
    ~Tax();

private:
    Ui::Tax *ui;
};

#endif // TAX_H
