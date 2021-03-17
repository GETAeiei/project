#ifndef SPACE04_H
#define SPACE04_H

#include <QDialog>

namespace Ui {
class space04;
}

class space04 : public QDialog
{
    Q_OBJECT

public:
    explicit space04(QWidget *parent = nullptr);
    ~space04();

private:
    Ui::space04 *ui;
};

#endif // SPACE04_H
