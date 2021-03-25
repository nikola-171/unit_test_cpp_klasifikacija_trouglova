#include "pch.h"
#include "CppUnitTest.h"
#include "../zadatak_trouglovi/trougao.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1Release
{
	TEST_CLASS(UnitTest1Release)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int kategorija;
			Assert::AreEqual(12.0, (trougao(3,4,5,kategorija)));
			Assert::AreEqual(2, kategorija);
		}

		TEST_METHOD(TestMethod2)
		{
			int kategorija;
			Assert::AreEqual(19.0, (trougao(6, 6, 7, kategorija)));
			Assert::AreEqual(1, kategorija);
		}

		TEST_METHOD(TestMethod3)
		{
			int kategorija;
			Assert::AreEqual(19.0, (trougao(6, 6, 7, kategorija)));
			Assert::AreEqual(1, kategorija);
		}

		TEST_METHOD(TestMethod4)
		{
			int kategorija;
			Assert::AreEqual(61.5, (trougao(20.5, 20.5, 20.5, kategorija)));
			Assert::AreEqual(0, kategorija);
		}

		TEST_METHOD(TestMethod5)
		{
			int kategorija;
			Assert::AreEqual(-1.0, (trougao(30, 70, 250, kategorija)));
			Assert::AreEqual(-1, kategorija);
		}

		TEST_METHOD(TestMethod6)
		{
			int kategorija;
			Assert::AreEqual(-1.0, (trougao(-5, 2, 2, kategorija)));
			Assert::AreEqual(-1, kategorija);
		}

		TEST_METHOD(TestMethod7)
		{
			int kategorija;
			Assert::AreEqual(-1.0, (trougao(0, 2, 8, kategorija)));
			Assert::AreEqual(-1, kategorija);
		}

		TEST_METHOD(TestMethod8)
		{
			int kategorija;
			Assert::AreEqual(-1.0, (trougao(3, -9, 7, kategorija)));
			Assert::AreEqual(-1, kategorija);
		}

		TEST_METHOD(TestMethod9)
		{
			int kategorija;
			Assert::AreEqual(-1.0, (trougao(4, 0, 2, kategorija)));
			Assert::AreEqual(-1, kategorija);
		}

		TEST_METHOD(TestMethod10)
		{
			int kategorija;
			Assert::AreEqual(-1.0, (trougao(3, 7, -11, kategorija)));
			Assert::AreEqual(-1, kategorija);
		}

		TEST_METHOD(TestMethod11)
		{
			int kategorija;
			Assert::AreEqual(-1.0, (trougao(4, 8, 0, kategorija)));
			Assert::AreEqual(-1, kategorija);
		}

	};
}
