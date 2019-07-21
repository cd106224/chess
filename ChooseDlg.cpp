#include "ChooseDlg.h"
#include <QVBoxLayout>
#include "Common/Common.h"

ChooseDlg::ChooseDlg(QWidget *parent) : QDialog(parent)
{
    m_buttons[0] = new QPushButton(sToqs("�˻���ս"));
    m_buttons[1] = new QPushButton(sToqs("���˶�ս"));
    m_buttons[2] = new QPushButton(sToqs("�����ս(�����)"));
    m_buttons[3] = new QPushButton(sToqs("�����ս(�ͻ���)"));

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
    QObject* s = sender();//��ȡ�����źŵĿؼ�
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

