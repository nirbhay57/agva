QT       += core gui charts serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bell.cpp \
    btn.cpp \
    chargograph.cpp \
    clickable_lable.cpp \
    clickable_widget.cpp \
    custom_pushbutton.cpp \
    ecg.cpp \
    four_graphs.cpp \
    fourgraphs.cpp \
    itemsetvalue.cpp \
    itemsetvalue1.cpp \
    label_with_slot.cpp \
    main.cpp \
    mainwindow.cpp \
    naya_form.cpp \
    setparameter.cpp \
    setparameter1.cpp \
    stprmtr.cpp \
    unitchart.cpp \
    volumechart.cpp

HEADERS += \
    bell.h \
    btn.h \
    chargograph.h \
    clickable_lable.h \
    clickable_widget.h \
    custom_pushbutton.h \
    ecg.h \
    four_graphs.h \
    fourgraphs.h \
    itemsetvalue.h \
    itemsetvalue1.h \
    label_with_slot.h \
    mainwindow.h \
    meterdata.h \
    naya_form.h \
    readingdata.h \
    setparameter.h \
    setparameter1.h \
    stprmtr.h \
    ui_ecg.h \
    unitchart.h \
    volumechart.h

FORMS += \
    bell.ui \
    chargograph.ui \
    fourgraphs.ui \
    mainwindow.ui \
    naya_form.ui \
    setparameter.ui \
    setparameter1.ui \
    stprmtr.ui \
    unitchart.ui \
    volumechart.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    risors.qrc
