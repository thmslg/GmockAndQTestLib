#include <QtTest/QtTest>
#include "gmock/gmock.h"  // Brings in Google Mock.
#include "gtest/gtest.h"

#include "MyClass.h"
#include "MockDummyInterface.h"

class MyFirstTest: public QObject
{
    Q_OBJECT
  private:
    MockDummyInterface mock_;
    MyClass class_;

  public:
    MyFirstTest():
      mock_(),
      class_(mock_)
    {}

  private slots:
    void myFirstTest()
    {
      // Call expectation
      EXPECT_CALL(mock_, DummyVirtualPureMethod()).Times(1).WillOnce(testing::Return(true));

      // Perform
      QVERIFY(class_.GetDummyResult() == true);
    }
};

QTEST_MAIN(MyFirstTest)
#include "tst_TestCase.moc"