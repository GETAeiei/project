#ifndef VIETNAM_H
#define VIETNAM_H

#include <QDialog>

namespace Ui {
class Vietnam;
}

class Vietnam : public QDialog
{
    Q_OBJECT

public:
    explicit Vietnam(QWidget *parent = nullptr);
    ~Vietnam();

private:
    Ui::Vietnam *ui;
};

#endif // VIETNAM_H
