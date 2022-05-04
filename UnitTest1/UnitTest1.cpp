#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3E\Lab_oop_3.3E\Triad.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3E\Lab_oop_3.3E\Triangle.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3E\Lab_oop_3.3E\Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP33E
{
	TEST_CLASS(UTOOP33E)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Triangle T(3, 4, 5);
			Assert::AreEqual(T.Square(), 6.0);
		}
	};
}