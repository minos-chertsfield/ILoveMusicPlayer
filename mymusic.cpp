#include "mymusic.h"
#include "ui_mymusic.h"

MyMusic::MyMusic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyMusic)
{
    ui->setupUi(this);
}

MyMusic::~MyMusic()
{
    delete ui;
}
