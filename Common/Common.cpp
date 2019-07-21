#include <iostream>
#include "Common.h"
QString sToqs(std::string s)
{
    QString QS_Name = QString::fromLocal8Bit(s.c_str());//ÂÒÂëµÄ´¦Àí
    return QS_Name;
}