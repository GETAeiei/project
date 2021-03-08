#ifndef JAPAN_H
#define JAPAN_H

#include <QDialog>

namespace Ui {
class Japan;
}

class Japan : public QDialog
{
    Q_OBJECT

public:
    explicit Japan(QWidget *parent = nullptr);
    ~Japan();

private:
    Ui::Japan *ui;
};

#endif // JAPAN_H
