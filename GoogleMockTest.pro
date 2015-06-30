### Begin Makefile for TestCase application using GoogleMock library

GMOCK_DIR =./gmock-1.7.0

# the test class needs these headers from GMock
INCLUDEPATH += $$GMOCK_DIR/include \
               $$GMOCK_DIR/gtest/include

# link to the compiled GMock library
LIBS += -L$$GMOCK_DIR -lgmock

# Make sure the GMock library is compiled
QMAKE_PRE_LINK += ${MAKE} -C $$GMOCK_DIR

## ---------------------------------------
## Actions to take after a successful compile
##   1) execute the test application with xml output to a log file
##   2) print the logfile to the console display
## ---------------------------------------
#QMAKE_POST_LINK = ./$$TARGET -xml -o $${TARGET}.xml; \
#                  cat $${TARGET}.xml

## tell 'make clean' to also remove the target and log files
QMAKE_CLEAN += $$TARGET $${TARGET}.xml

## Adding QT support
QT += testlib

CONFIG += testcase

# # ---------------------------------------
# # My test application
# # ---------------------------------------
HEADERS += \
MyClass.h \ 
DummyInterface.h

SOURCES += \
MyClass.cpp \
DummyInterface.cpp \
tst_TestCase.cpp

#### End Makefile