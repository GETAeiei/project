#ifndef CHINA_H
#define CHINA_H

#include <QDialog>

namespace Ui {
class China;
}

class China : public QDialog
{
    Q_OBJECT

public:
    explicit China(QWidget *parent = nullptr);
    ~China();

private:
    Ui::China *ui;
};

#endif // CHINA_H
