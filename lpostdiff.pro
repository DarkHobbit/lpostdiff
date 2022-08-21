# Copyright (C) 2022 Mikhail Y. Zvyozdochkin aka DarkHobbit
# Contact: pub@zvyozdochkin.ru
#
# This file is part of the lpostdiff utility for Qt
#
# GNU Lesser General Public License Usage
# This file may be used under the terms of the GNU Lesser General Public License
# version 2.1 or version 3 as published by the Free Software Foundation.
# Please review the # following information to ensure the
# GNU Lesser General Public License requirements will be met:
# https://www.gnu.org/licenses/lgpl.html and
# http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.

# TODO compat with QT5

QT += core \
    xml
QT -= gui

TARGET = lpostdiff
CONFIG += console
CONFIG -= app_bundle
TEMPLATE = app

SOURCES +=
    main.cpp \
    lpostdiffapplication.cpp \

HEADERS +=
    lpostdiffapplication.h \
