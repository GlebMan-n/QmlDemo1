#include "movieplayer.h"
#include <QRandomGenerator>
#include <QDebug>

MoviePlayer::MoviePlayer(QObject *parent) : QObject(parent)
{
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &MoviePlayer::onTimer);
    m_timer->start(5000);
    bPic = true;
}

void MoviePlayer::onTimer()
{

    if(bPic)
        signSetBackgroundPic(QString("qrc:/bNsFIa.jpg"));
    else
        signSetBackgroundPic(QString("qrc:/yX0KvT.jpg"));
    bPic = !bPic;

    double bOpacity = ((double)QRandomGenerator::global()->bounded(1,9)) / 10;
    emit signSetBackgroundOpacity(bOpacity);
    double pOpacity = ((double)QRandomGenerator::global()->bounded(1,9)) / 10;
    emit signSetPulseOpacity(pOpacity);
    double tOpacity = ((double)QRandomGenerator::global()->bounded(1,9)) / 10;
    emit signSetTextOpacity(tOpacity);
    qWarning() << bOpacity << " " << pOpacity  << " " << tOpacity;
}
