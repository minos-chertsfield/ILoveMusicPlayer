#ifndef MYMUSIC_H
#define MYMUSIC_H

#include <QWidget>

namespace Ui {
class MyMusic;
}

class MyMusic : public QWidget
{
    Q_OBJECT

public:
    explicit MyMusic(QWidget *parent = 0);
    ~MyMusic();

private:
    Ui::MyMusic *ui;
};

#endif // MYMUSIC_H
