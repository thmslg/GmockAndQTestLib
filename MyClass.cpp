#include "MyClass.h"

#include "DummyInterface.h"

MyClass::MyClass(
  DummyInterface& DummyInterface
) :
  Dummy_(DummyInterface)
{

}

bool MyClass::GetDummyResult()
{
  return Dummy_.DummyVirtualPureMethod();
}
