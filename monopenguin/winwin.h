#ifndef WINWIN_H
#define WINWIN_H

#include <QDialog>

namespace Ui {
class Winwin;
}

class Winwin : public QDialog
{
    Q_OBJECT

public:
    explicit Winwin(QWidget *parent = nullptr);
    ~Winwin();

private:
    Ui::Winwin *ui;
    Winwin *win1;
};

#endif // WINWIN_H
