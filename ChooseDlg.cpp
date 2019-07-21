#include "ChooseDlg.h"
#include <QVBoxLayout>
#include "Common/Common.h"

ChooseDlg::ChooseDlg(QWidget *parent) : QDialog(parent)
{
    m_buttons[0] = new QPushButton(sToqs("人机对战"));
    m_buttons[1] = new QPushButton(sToqs("人人对战"));
    m_buttons[2] = new QPushButton(sToqs("网络对战(服务端)"));
    m_buttons[3] = new QPushButton(sToqs("网络对战(客户端)"));

    QVBoxLayout* lay = new QVBoxLayout(this);
    lay->addWidget(m_buttons[0]);
    lay->addWidget(m_buttons[1]);
    lay->addWidget(m_buttons[2]);
    lay->addWidget(m_buttons[3]);

    for(int i=0; i<4; ++i)
    {
        connect(m_buttons[i], SIGNAL(clicked()), this, SLOT(slotClicked()));
    }
}

void ChooseDlg::slotClicked()
{
    QObject* s = sender();//获取发射信号的控件
    for(int i=0; i<4; ++i)
    {
        if(m_buttons[i] == s)
        {
            m_selected = i;
            break;
        }
    }
    accept();
}

ChooseDlg::~ChooseDlg()
{

}

