#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "videopage.h"
#include "friendpage.h"
#include "discoverpage.h"
#include "miniplayer.h"
#include <QDebug>
#include <QListWidgetItem>
#include <QToolBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QStringList list;
    list << "发现音乐" << "视频" << "朋友" << "直播" << "私人FM" << "我的音乐";
    ui->listInfo->addItems(list);
    connect(ui->listInfo, &QListWidget::itemClicked, this, &MainWindow::onItemSelected);

    QToolBar* player = new QToolBar(this);
    MiniPlayer *playerWidget = new MiniPlayer();
    player->addWidget(playerWidget);
    addToolBar(Qt::BottomToolBarArea, player);

}


void MainWindow::onItemSelected()
{
    switch(ui->listInfo->currentRow()) {
        case 0:
            {
                 qDebug() << "发现音乐" << endl;
                 DiscoverPage* discoverPage = new DiscoverPage();
                 ui->scrollArea->setWidget(discoverPage);
            }
            break;
        case 1:
            {
                qDebug() << "视频" << endl;
                VideoPage* videoPage = new VideoPage();
                ui->scrollArea->setWidget(videoPage);
            }
            break;
        case 2:
            {
                qDebug() << "朋友" << endl;
                FriendPage* friendPage = new FriendPage();
                ui->scrollArea->setWidget(friendPage);
            }
            break;
        case 3:
            qDebug() << "直播" << endl;
            break;
        case 4:
            qDebug() << "私人FM" << endl;
            break;
        case 5:
            qDebug() << "我的音乐" << endl;
            break;
    };
}

MainWindow::~MainWindow()
{
    delete ui;
}

