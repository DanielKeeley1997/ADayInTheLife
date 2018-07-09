#ifndef WELCOMESCREEN_H
#define WELCOMESCREEN_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class WelcomeScreen : public QMainWindow
{
    Q_OBJECT
public:
    explicit WelcomeScreen(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // WELCOMESCREEN_H