#ifndef SPACE17_H
#define SPACE17_H

#include <QDialog>

namespace Ui {
class space17;
}

class space17 : public QDialog
{
    Q_OBJECT

public:
    explicit space17(QWidget *parent = nullptr);
    ~space17();

private:
    Ui::space17 *ui;
};

#endif // SPACE17_H
