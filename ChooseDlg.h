#ifndef __ChooseDlg_H__
#define __ChooseDlg_H__

#include <QDialog>
#include <QPushButton>

class ChooseDlg : public QDialog
{
    Q_OBJECT
public:
    ChooseDlg(QWidget *parent = 0);
    ~ChooseDlg();

    QPushButton*      m_buttons[4];
    int               m_selected;
public slots:
    void slotClicked();
};

#endif // ChooseDlg_H
