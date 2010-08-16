#############################################################################
# Makefile for building: QTMatrix
# Generated by qmake (1.07a) (Qt 3.3.8b) on: Tue Aug 17 01:09:53 2010
# Project:  QTMatrix.pro
# Template: app
# Command: $(QMAKE) "CONFIG+=debug_and_release" -o Makefile QTMatrix.pro
#############################################################################

####### Compiler, tools and options

CC       = gcc
CXX      = g++
LEX      = flex
YACC     = yacc
CFLAGS   = -pipe -g -Wall -W -O2 -D_REENTRANT  -DQT_NO_DEBUG -DQT_THREAD_SUPPORT -DQT_SHARED -DQT_TABLET_SUPPORT
CXXFLAGS = -pipe -g -Wall -W -O2 -D_REENTRANT  -DQT_NO_DEBUG -DQT_THREAD_SUPPORT -DQT_SHARED -DQT_TABLET_SUPPORT
LEXFLAGS = 
YACCFLAGS= -d
INCPATH  = -I/usr/share/qt3/mkspecs/default -I. -I/usr/include/qt3
LINK     = g++
LFLAGS   = 
LIBS     = $(SUBLIBS) -L/usr/share/qt3/lib -L/usr/X11R6/lib -lqt-mt -lXext -lX11 -lm -lpthread
AR       = ar cqs
RANLIB   = 
MOC      = /usr/share/qt3/bin/moc
UIC      = /usr/share/qt3/bin/uic
QMAKE    = qmake
TAR      = tar -cf
GZIP     = gzip -9f
COPY     = cp -f
COPY_FILE= $(COPY)
COPY_DIR = $(COPY) -r
INSTALL_FILE= $(COPY_FILE)
INSTALL_DIR = $(COPY_DIR)
DEL_FILE = rm -f
SYMLINK  = ln -sf
DEL_DIR  = rmdir
MOVE     = mv -f
CHK_DIR_EXISTS= test -d
MKDIR    = mkdir -p

####### Output directory

OBJECTS_DIR = ./

####### Files

HEADERS = line.h \
		point.h \
		qtmatrix.h \
		drawwidget.h
SOURCES = line.cpp \
		point.cpp \
		main.cpp \
		qtmatrix.cpp \
		drawwidget.cpp
OBJECTS = line.o \
		point.o \
		main.o \
		qtmatrix.o \
		drawwidget.o \
		qtmatrix.o \
		drawwidget.o
FORMS = qtmatrix.ui \
		drawwidget.ui
UICDECLS = qtmatrix.h \
		drawwidget.h
UICIMPLS = qtmatrix.cpp \
		drawwidget.cpp
SRCMOC   = moc_qtmatrix.cpp \
		moc_drawwidget.cpp \
		moc_qtmatrix.cpp \
		moc_drawwidget.cpp
OBJMOC = moc_qtmatrix.o \
		moc_drawwidget.o \
		moc_qtmatrix.o \
		moc_drawwidget.o
DIST	   = QTMatrix.pro
QMAKE_TARGET = QTMatrix
DESTDIR  = 
TARGET   = QTMatrix

first: all
####### Implicit rules

.SUFFIXES: .c .o .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@ $<

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(UICDECLS) $(OBJECTS) $(OBJMOC)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJMOC) $(OBJCOMP) $(LIBS)

mocables: $(SRCMOC)
uicables: $(UICDECLS) $(UICIMPLS)

$(MOC): 
	( cd $(QTDIR)/src/moc && $(MAKE) )

Makefile: QTMatrix.pro  /usr/share/qt3/mkspecs/default/qmake.conf /usr/share/qt3/lib/libqt-mt.prl
	$(QMAKE) "CONFIG+=debug_and_release" -o Makefile QTMatrix.pro
qmake: 
	@$(QMAKE) "CONFIG+=debug_and_release" -o Makefile QTMatrix.pro

dist: 
	@mkdir -p .tmp/QTMatrix && $(COPY_FILE) --parents $(SOURCES) $(HEADERS) $(FORMS) $(DIST) .tmp/QTMatrix/ && ( cd `dirname .tmp/QTMatrix` && $(TAR) QTMatrix.tar QTMatrix && $(GZIP) QTMatrix.tar ) && $(MOVE) `dirname .tmp/QTMatrix`/QTMatrix.tar.gz . && $(DEL_FILE) -r .tmp/QTMatrix

mocclean:
	-$(DEL_FILE) $(OBJMOC)
	-$(DEL_FILE) $(SRCMOC)

uiclean:
	-$(DEL_FILE) $(UICIMPLS) $(UICDECLS)

yaccclean:
lexclean:
clean: mocclean uiclean
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) $(TARGET)


FORCE:

####### Compile

line.o: line.cpp line.h \
		point.h

point.o: point.cpp point.h

main.o: main.cpp qtmatrix.h \
		ui_qtmatrix.h \
		drawwidget.h \
		point.h \
		line.h \
		ui_drawwidget.h

qtmatrix.o: qtmatrix.cpp qtmatrix.h \
		ui_qtmatrix.h \
		drawwidget.h \
		point.h \
		line.h \
		ui_drawwidget.h \
		qtmatrix.h

drawwidget.o: drawwidget.cpp drawwidget.h \
		point.h \
		line.h \
		ui_drawwidget.h \
		drawwidget.h

qtmatrix.h: qtmatrix.ui drawwidget.h \
		point.h \
		line.h \
		ui_drawwidget.h
	$(UIC) qtmatrix.ui -o qtmatrix.h

qtmatrix.cpp: qtmatrix.h qtmatrix.ui drawwidget.h \
		point.h \
		line.h \
		ui_drawwidget.h
	$(UIC) qtmatrix.ui -i qtmatrix.h -o qtmatrix.cpp

drawwidget.h: drawwidget.ui 
	$(UIC) drawwidget.ui -o drawwidget.h

drawwidget.cpp: drawwidget.h drawwidget.ui 
	$(UIC) drawwidget.ui -i drawwidget.h -o drawwidget.cpp

qtmatrix.o: qtmatrix.cpp qtmatrix.h \
		ui_qtmatrix.h \
		drawwidget.h \
		point.h \
		line.h \
		ui_drawwidget.h \
		qtmatrix.h

drawwidget.o: drawwidget.cpp drawwidget.h \
		point.h \
		line.h \
		ui_drawwidget.h \
		drawwidget.h

moc_qtmatrix.o: moc_qtmatrix.cpp  qtmatrix.h ui_qtmatrix.h \
		drawwidget.h \
		point.h \
		line.h \
		ui_drawwidget.h

moc_drawwidget.o: moc_drawwidget.cpp  drawwidget.h point.h \
		line.h \
		ui_drawwidget.h

moc_qtmatrix.o: moc_qtmatrix.cpp  qtmatrix.h ui_qtmatrix.h \
		drawwidget.h \
		point.h \
		line.h \
		ui_drawwidget.h

moc_drawwidget.o: moc_drawwidget.cpp  drawwidget.h point.h \
		line.h \
		ui_drawwidget.h

moc_qtmatrix.cpp: $(MOC) qtmatrix.h
	$(MOC) qtmatrix.h -o moc_qtmatrix.cpp

moc_drawwidget.cpp: $(MOC) drawwidget.h
	$(MOC) drawwidget.h -o moc_drawwidget.cpp

moc_qtmatrix.cpp: $(MOC) qtmatrix.h
	$(MOC) qtmatrix.h -o moc_qtmatrix.cpp

moc_drawwidget.cpp: $(MOC) drawwidget.h
	$(MOC) drawwidget.h -o moc_drawwidget.cpp

####### Install

install:  

uninstall:  
