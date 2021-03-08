#ifndef KOREA_H
#define KOREA_H

#include <QDialog>

namespace Ui {
class Korea;
}

class Korea : public QDialog
{
    Q_OBJECT

public:
    explicit Korea(QWidget *parent = nullptr);
    ~Korea();

private:
    Ui::Korea *ui;
};

#endif // KOREA_H
