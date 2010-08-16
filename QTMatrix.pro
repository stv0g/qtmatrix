TEMPLATE = app
TARGET = QTMatrix
QT += core \
    gui \
    xml
HEADERS += line.h \
    point.h \
    qtmatrix.h \
    drawwidget.h
SOURCES += line.cpp \
    point.cpp \
    main.cpp \
    qtmatrix.cpp \
    drawwidget.cpp
FORMS += qtmatrix.ui \
    drawwidget.ui
RESOURCES += icons.qrc
