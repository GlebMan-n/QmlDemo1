#ifndef MOVIEPLAYER_H
#define MOVIEPLAYER_H

#include <QObject>
#include <QTimer>
#include <QVariant>

class MoviePlayer : public QObject
{
    Q_OBJECT
public:
    explicit MoviePlayer(QObject *parent = nullptr);

private:
    QTimer* m_timer;
    bool bPic;
private slots:
    void onTimer();
signals:
    void signSetBackgroundOpacity(double opacity);
    void signSetPulseOpacity(double opacity);
    void signSetTextOpacity(double opacity);
    void signSetBackgroundPic(QString path);
};

#endif // MOVIEPLAYER_H
