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
    Q_INVOKABLE QString getJson();
    Q_INVOKABLE void setJson(QString json);

private:
    QTimer* m_timer;
    bool bPic;
    QString internalData;
    QString m_json;
private slots:
    void onTimer();
signals:
    void signSetBackgroundOpacity(double opacity);
    void signSetPulseOpacity(double opacity);
    void signSetTextOpacity(double opacity);
    void signSetBackgroundPic(QString path);
};

#endif // MOVIEPLAYER_H
