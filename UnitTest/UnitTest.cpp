#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\Lab_05_5\Lab_05_5.cpp"   

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(Test_C_BaseCases)
        {
           
            Assert::AreEqual(1, C(5, 0));
            Assert::AreEqual(1, C(10, 0));

            Assert::AreEqual(1, C(5, 5));
            Assert::AreEqual(1, C(8, 8));
        }

        TEST_METHOD(Test_C_SimpleValues)
        {
            Assert::AreEqual(1, C(1, 0));
            Assert::AreEqual(1, C(1, 1));
            Assert::AreEqual(2, C(2, 1));
            Assert::AreEqual(3, C(3, 1));
            Assert::AreEqual(3, C(3, 2));
        }

        TEST_METHOD(Test_C_MoreValues)
        {
            Assert::AreEqual(6, C(4, 2));  
            Assert::AreEqual(10, C(5, 2));   
            Assert::AreEqual(10, C(5, 3));   
            Assert::AreEqual(20, C(6, 3));   
        }
    };
}

