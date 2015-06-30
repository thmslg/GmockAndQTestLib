
#ifndef DUMMYINTERFACE_H_
#define DUMMYINTERFACE_H_

#include <QObject>

class DummyInterface : QObject
{
    Q_OBJECT

  public:
    DummyInterface();

    virtual ~DummyInterface() {}

    virtual bool DummyVirtualPureMethod() = 0;
};

#endif // DUMMYINTERFACE_H_