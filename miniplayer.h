#ifndef MINIPLAYER_H
#define MINIPLAYER_H

#include <QWidget>

namespace Ui {
class MiniPlayer;
}

class MiniPlayer : public QWidget
{
    Q_OBJECT

public:
    explicit MiniPlayer(QWidget *parent = 0);
    ~MiniPlayer();

private:
    Ui::MiniPlayer *ui;
};

#endif // MINIPLAYER_H
