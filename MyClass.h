#ifndef MYCLASS_H_

class DummyInterface;

class MyClass
{
  public:
    MyClass(
      DummyInterface& DummyInterface
    );

    bool GetDummyResult();

  private:
    DummyInterface& Dummy_;
};

#define MYCLASS_H_
#endif // MYCLASS_H_