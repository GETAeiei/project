#ifndef SUPERTAX_H
#define SUPERTAX_H

#include <QDialog>

namespace Ui {
class Supertax;
}

class Supertax : public QDialog
{
    Q_OBJECT

public:
    explicit Supertax(QWidget *parent = nullptr);
    ~Supertax();

private:
    Ui::Supertax *ui;
};

#endif // SUPERTAX_H
