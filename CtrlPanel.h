#ifndef __CTRLPANEL_H__
#define __CTRLPANEL_H__

#include <QWidget>
#include <QPushButton>

class CtrlPanel : public QWidget
{
    Q_OBJECT
public:
    CtrlPanel(QWidget *parent = nullptr);
    ~CtrlPanel();

    QPushButton* _back;

signals:
    void sigBack();
};

#endif // CTRLPANEL_H
