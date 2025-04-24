/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, two_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("ZZ");
	ASSERT_EQ(2, actual);
}
TEST(PasswordTest, Two_letter_different_case_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Zz");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, four_letter_sep_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("aZaa");
	ASSERT_EQ(1, actual);
	int actual2 = my_password.count_leading_characters("aaza");
	ASSERT_EQ(2, actual2);
}
TEST(PasswordTest, long_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");
	ASSERT_EQ(57, actual);
}
TEST(PasswordTest, empty_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual);
}
