#ifndef FRANCE_H
#define FRANCE_H

#include <QDialog>

namespace Ui {
class France;
}

class France : public QDialog
{
    Q_OBJECT

public:
    explicit France(QWidget *parent = nullptr);
    ~France();

private:
    Ui::France *ui;
};

#endif // FRANCE_H
