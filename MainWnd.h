#ifndef __MAINWND_H__
#define __MAINWND_H__

#include <QWidget>
#include "Board.h"
#include "CtrlPanel.h"

class MainWnd : public QWidget
{
    Q_OBJECT
public:
    MainWnd(int gameType, QWidget *parent = nullptr);
    ~MainWnd();

    int m_gameType;
};

#endif // MAINWND_H
