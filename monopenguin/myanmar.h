#ifndef MYANMAR_H
#define MYANMAR_H

#include <QDialog>

namespace Ui {
class Myanmar;
}

class Myanmar : public QDialog
{
    Q_OBJECT

public:
    explicit Myanmar(QWidget *parent = nullptr);
    ~Myanmar();

private:
    Ui::Myanmar *ui;
};

#endif // MYANMAR_H
