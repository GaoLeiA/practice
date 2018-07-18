
#include <gtest/gtest.h>
#include <string>
namespace testing {

	GTEST_DECLARE_string_(death_test_style);
	GTEST_DECLARE_string_(filter);
	GTEST_DECLARE_int32_(repeat);

}  // namespace testing
using testing::GTEST_FLAG(filter);

/*

Summarising @Rasmi Ranjan Nayak and @nogard answers and adding another option:

On the console
You should use the flag --gtest_filter, like

--gtest_filter=Test_Cases1*
(You can also do this in Properties|Configuration Properties|Debugging|Command Arguments)

On the environment
You should set the variable GTEST_FILTER like

export GTEST_FILTER = "Test_Cases1*"
On the code
You should set a flag filter, like

::testing::GTEST_FLAG(filter) = "Test_Cases1*";
such that your main function becomes something like

int main(int argc, char **argv) {
::testing::InitGoogleTest(&argc, argv);
::testing::GTEST_FLAG(filter) = "Test_Cases1*";
return RUN_ALL_TESTS();
}
See section Running a Subset of the Tests for more info on the syntax of the string you can use.
*/
int main(int argc, char **argv)
{
	//testing::GTEST_FLAG(filter) = "*";//":-:*Counter*";
	//::testing::GTEST_FLAG(output) = "*";
	//::testing::GTEST_FLAG(filter) = "*Counter*:*IsPrime*:*ListenersTest.DoesNotLeak*";//":-:*Counter*";
	testing::InitGoogleTest(&argc, argv);
	GTEST_FLAG(filter) = "Test_Cases1*";
	return RUN_ALL_TESTS();
}