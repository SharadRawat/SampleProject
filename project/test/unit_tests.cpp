///
/// @file unit_tests.cpp
/// 

#include "gtest/gtest.h"

TEST(UnitTesting, Size_GivenNull_ExpectZeroSize)
{   
    // Given
    std::vector<double> some_vec;
    
    // When
    int result = some_vec.size();
    
    // Then
    EXPECT_EQ(result,0);
}


