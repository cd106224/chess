#include "MainWnd.h"
#include <QHBoxLayout>
#include "SingleGame.h"
#include "MultiGame.h"
#include "NetGame.h"

MainWnd::MainWnd(int gameType, QWidget *parent) 
    : QWidget(parent)
    , m_gameType(gameType)
{
    if(0 == m_gameType)
    {
        SingleGame* game = new SingleGame();
        CtrlPanel* panel = new CtrlPanel();

        QHBoxLayout* hLay = new QHBoxLayout(this);
        hLay->addWidget(game, 1);
        hLay->addWidget(panel);
        connect(panel, SIGNAL(sigBack()), game, SLOT(slotBack()));
    }
    else if(1 == m_gameType)
    {
        MultiGame* game = new MultiGame();
        CtrlPanel* panel = new CtrlPanel();

        QHBoxLayout* hLay = new QHBoxLayout(this);
        hLay->addWidget(game, 1);
        hLay->addWidget(panel);
        connect(panel, SIGNAL(sigBack()), game, SLOT(slotBack()));
    }
    else if(2 == m_gameType)
    {
        NetGame* game = new NetGame(true);
        CtrlPanel* panel = new CtrlPanel();

        QHBoxLayout* hLay = new QHBoxLayout(this);
        hLay->addWidget(game, 1);
        hLay->addWidget(panel);
        connect(panel, SIGNAL(sigBack()), game, SLOT(slotBack()));
    }
    else if(3 == m_gameType)
    {
        NetGame* game = new NetGame(false);
        CtrlPanel* panel = new CtrlPanel();

        QHBoxLayout* hLay = new QHBoxLayout(this);
        hLay->addWidget(game, 1);
        hLay->addWidget(panel);
        connect(panel, SIGNAL(sigBack()), game, SLOT(slotBack()));
    }
}

MainWnd::~MainWnd()
{

}

