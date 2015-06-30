#ifndef MOCKEDUMMYINTERFACE_
#define MOCKEDUMMYINTERFACE_

#include "DummyInterface.h"

class MockDummyInterface : public DummyInterface {
  public:
    MOCK_METHOD0(DummyVirtualPureMethod, bool());
};

#endif // MOCKEDUMMYINTERFACE_
