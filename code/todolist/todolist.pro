#-------------------------------------------------
#
# Project created by QtCreator 2024-01-11T23:39:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = todolist
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        todolist_main.cpp \
    timeing_synchronization.cpp \
    resource/Qt_My_UI_Classs/todo_item/todo_item.cpp \
    resource/Qt_My_UI_Classs/todo_table/todo_table.cpp

HEADERS += \
        todolist_main.h \
    timeing_synchronization.h \
    resource/Qt_My_UI_Classs/todo_item/todo_item.h \
    resource/Qt_My_UI_Classs/todo_table/todo_table.h

FORMS += \
        todolist_main.ui \
    resource/Qt_My_UI_Classs/todo_item/todo_item.ui \
    resource/Qt_My_UI_Classs/todo_table/todo_table.ui
