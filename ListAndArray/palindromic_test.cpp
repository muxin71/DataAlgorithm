#include <gtest/gtest.h>

#include "palindromic.hpp" // Replace with the actual header file name

TEST(WhetherPalindromicStringTest, EmptyString) {
    std::string input = "";
    bool expected = true;
    bool result = whetherPalindromicString(input);
    EXPECT_EQ(expected, result);
}

TEST(WhetherPalindromicStringTest, PalindromeOddLength) {
    std::string input = "level";
    bool expected = true;
    bool result = whetherPalindromicString(input);
    EXPECT_EQ(expected, result);
}

TEST(WhetherPalindromicStringTest, PalindromeEvenLength) {
    std::string input = "noon";
    bool expected = true;
    bool result = whetherPalindromicString(input);
    EXPECT_EQ(expected, result);
}

TEST(WhetherPalindromicStringTest, NotPalindrome) {
    std::string input = "hello";
    bool expected = false;
    bool result = whetherPalindromicString(input);
    EXPECT_EQ(expected, result);
}

TEST(WhetherPalindromicStringTest, SingleCharacter) {
    std::string input = "a";
    bool expected = true;
    bool result = whetherPalindromicString(input);
    EXPECT_EQ(expected, result);
}

TEST(WhetherPalindromicStringTest, MixedCasePalindrome) {
    std::string input = "Racecar";
    bool expected = true;
    bool result = whetherPalindromicString(input);
    EXPECT_EQ(expected, result);
}

TEST(WhetherPalindromicStringTest, WithOtherCharacters) {
    std::string input = "Racecar * *_ racecaR";
    bool expected = true;
    bool result = whetherPalindromicString(input);
    EXPECT_EQ(expected, result);
}
