#include "pch.h"
#include "CppUnitTest.h"
#include "../AP.laba.5.5/AP.laba.5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            int t;
            int depth = 0;
            t = C(4, 2, 1, depth);
            Assert::AreEqual(t, 6);
        }

        TEST_METHOD(TestMethod2)
        {
            int t;
            int depth = 0;
            t = C(5, 2, 1, depth);
            Assert::AreEqual(t, 10);
        }

        TEST_METHOD(TestMethod3)
        {
            int t;
            int depth = 0;
            t = C(3, 0, 1, depth);
            Assert::AreEqual(t, 1);
        }

        TEST_METHOD(TestMethod4)
        {
            int t;
            int depth = 0;
            C(2, 1, 1, depth);
            t = depth;
            Assert::AreEqual(t, 2);
        }

        TEST_METHOD(TestMethod5)
        {
            int t;
            int depth = 0;
            t = f(0, 1, depth);
            Assert::AreEqual(t, 1);
        }

        TEST_METHOD(TestMethod6)
        {
            int t;
            int depth = 0;
            t = f(5, 1, depth);
            Assert::AreEqual(t, 8);
        }

        TEST_METHOD(TestMethod7)
        {
            int t;
            int depth = 0;
            f(4, 1, depth);
            t = depth;
            Assert::AreEqual(t, 4);
        }

        TEST_METHOD(TestMethod8)
        {
            int t = 0;
            int depth = 0;
            int n = 6;
            for (int k = 0; k <= n / 2; k++)
                t += C(n - k, k, 1, depth);
            depth = 0;
            Assert::AreEqual(t, f(n, 1, depth));
        }
    };
}
