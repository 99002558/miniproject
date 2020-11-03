#include "account.cc"
#include <gtest/gtest.h>
namespace
{
    TEST(account, DefaultConstructor)
    {
      Account d1;
      EXPECT_EQ(0.0,d1.get_balance());

    }
    TEST(account, parameterisedConstructor)
    {
      Account d1(1,"sowmi",20.45);
      EXPECT_EQ(20.45,d1.get_balance());

    }
    TEST(account, DefaultparamConstructor)
    {
      Account d1(1,"sowmi");
      EXPECT_EQ(0.0,d1.get_balance());

    }
    TEST(account, CopyConstructor)
    {
      Account d1(1,"sowmi",20.45);
      Account d2(d1);
      EXPECT_EQ(20.45,d2.get_balance());

    }
    TEST(Account,Credit)
    {
     Account a1;
     a1.credit(100);
     Account a2(1,"Momo",100);
     a2.credit(100);
     EXPECT_EQ(100.0,a1.get_balance());
     EXPECT_EQ(200.0,a2.get_balance());
    }

     TEST(Account,Debit)
    {

     Account a2(1,"Momo",100);
     a2.debit(50);
     EXPECT_EQ(50,a2.get_balance());
    }

    TEST(Account, Display)
    {
    Account a1(2,"Nani",2000.96);
    std::string ExpectedOut="2,Nani,2000.96\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

    }
}

int main(int argc, char **argv)
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }

