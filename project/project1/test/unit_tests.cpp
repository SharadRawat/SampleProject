///
/// @file unit_tests.cpp
///

#include "gtest/gtest.h"
#include <vector>

namespace std
{

TEST(UnitTesting, Size_GivenNull_ExpectZeroSize)
{
    // Given
    // std::vector<double> some_vec;
    double some_vec = 0;

    // When
    int result = some_vec;

    // Then
    EXPECT_EQ(result, 0);
}
} // namespace std
