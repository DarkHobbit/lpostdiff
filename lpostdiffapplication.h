/****************************************************************************
**
** Copyright (C) 2022 Mikhail Y. Zvyozdochkin aka DarkHobbit
** Contact: pub@zvyozdochkin.ru
**
** This file is part of the lpostdiff utility for Qt
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public License
** version 2.1 or version 3 as published by the Free Software Foundation.
** Please review the ** following information to ensure the
** GNU Lesser General Public License requirements will be met:
** https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
****************************************************************************/

#ifndef LPOSTDIFFAPPLICATION_H
#define LPOSTDIFFAPPLICATION_H

#include <iostream>
#include <QCoreApplication>
#include <QTextStream>

class LPostDiffApplication : public QCoreApplication
{
public:
    LPostDiffApplication(int &argc, char **argv);
    int start();
    void printUsage();
private:
    QTextStream out;
};

#endif // LPOSTDIFFAPPLICATION_H
