#ifndef FRIENDPAGE_H
#define FRIENDPAGE_H

#include <QWidget>

namespace Ui {
class FriendPage;
}

class FriendPage : public QWidget
{
    Q_OBJECT

public:
    explicit FriendPage(QWidget *parent = 0);
    ~FriendPage();

private:
    Ui::FriendPage *ui;
};

#endif // FRIENDPAGE_H
