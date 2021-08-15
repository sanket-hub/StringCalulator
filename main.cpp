
*test*

#include "calcTest.h"
#include "calc.h"
#include "common_cppunit_headers.h"
#include <stdexcept>
class CalcTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUIT(alcTest);
	CPPUNIT_TEST_SUIT(add_emptyString_returns0);
	CPPUNIT_TEST_SUIT(add_oneNumberString_returns1);
	CPPUNIT_TEST_SUIT(add_twoNumberString_returns2);
	CPPUNIT_TEST_SUIT(add_threeNumberString_returns3);
	CPPUNIT_TEST_SUIT(add_fiveNumberString_returns5);
	CPPUNIT_TEST_SUIT(add_newLineDelinTwoNumberString_returns2);
	CPPUNIT_TEST_SUIT(add_userDlineTwoNumber_returns2);
	CPPUNIT_TEST_SUIT(add_negativeNumber_throwException);
	CPPUNIT_TEST_SUIT(add_secondNumberIsNegative_throwException);
	CPPUNIT_TEST_SUIT_END();
public:
	void add_emptyString_returns0()
	{
		int result = add("");
		CPPUNIT_ASSERT_EQUAL(0,result);
	}
	void add_oneNumberString_returns1()
	{
		int result = add("1");
		CPPUNIT_ASSERT_EQUAL(1,result);
	}
	void add_twoNumberString_returns2()
	{
		int result = add("1,1");
		CPPUNIT_ASSERT_EQUAL(2,result);
	}
	void add_threeNumberString_returns3()
	{
		int result = add("1,1,1");
		CPPUNIT_ASSERT_EQUAL(3,result);
	}
	void add_fiveNumberString_returns5()
	{
		int result = add("1,1,1,1,1");
		CPPUNIT_ASSERT_EQUAL(5,result);
	}
	void add_newLineDelinTwoNumberString_returns2()
	{
		int result = add("1\n1");
		CPPUNIT_ASSERT_EQUAL(2,result);
	}
	void add_userDlineTwoNumber_returns2()
	{
		int result = add("//;\n1;1");
		CPPUNIT_ASSERT_EQUAL(2,result);
	}
	void add_negativeNumber_throwException()
	{
		CPPUNIT_ASSERT_throw(add("-1"),std::runtime_error);
	}
	void add_secondNumberIsNegative_throwException()
	{
		CPPUNIT_ASSERT_THRO(add("1,-1"),std::runtime_error);
	}	


};
CPPUNIT_TEST_SUITE_REGISTRATION(CalTest);   	
