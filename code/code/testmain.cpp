
#include <gtest/gtest.h>
#include <string>
namespace testing {

	GTEST_DECLARE_string_(death_test_style);
	GTEST_DECLARE_string_(filter);
	GTEST_DECLARE_int32_(repeat);

}  // namespace testing
using testing::GTEST_FLAG(filter);

int main(int argc, char **argv)
{

	testing::InitGoogleTest(&argc, argv);
	//GTEST_FLAG(filter) = "Test_Cases1*";
	return RUN_ALL_TESTS();
}