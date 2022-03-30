QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    btn.cpp \
    custom_pushbutton.cpp \
    ecg.cpp \
    itemsetvalue.cpp \
    itemsetvalue1.cpp \
    main.cpp \
    mainwindow.cpp \
    naya_form.cpp \
    setparameter.cpp \
    setparameter11.cpp \
    stprmtr.cpp \
    unitchart.cpp \
    volumechart.cpp

HEADERS += \
    btn.h \
    custom_pushbutton.h \
    ecg.h \
    itemsetvalue.h \
    itemsetvalue1.h \
    mainwindow.h \
    meterdata.h \
    naya_form.h \
    readingdata.h \
    setparameter.h \
    setparameter11.h \
    stprmtr.h \
    unitchart.h \
    volumechart.h

FORMS += \
    ecg.ui \
    mainwindow.ui \
    naya_form.ui \
    setparameter.ui \
    setparameter11.ui \
    stprmtr.ui \
    unitchart.ui \
    volumechart.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    risors.qrc
