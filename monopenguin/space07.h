#ifndef SPACE07_H
#define SPACE07_H

#include <QDialog>

namespace Ui {
class space07;
}

class space07 : public QDialog
{
    Q_OBJECT

public:
    explicit space07(QWidget *parent = nullptr);
    ~space07();

private:
    Ui::space07 *ui;
};

#endif // SPACE07_H
