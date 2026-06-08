#include "gtest/gtest.h"
#include "get-score.hpp"

struct ScrabbleScoreTestSuite {};

TEST(ScrabbleScoreTestSuite, dummyTest)
{
  ASSERT_TRUE(false);
}

TEST(ScrabbleScoreTestSuite, oneChar)
{
  ASSERT_EQ(getScoreFromScrabble("a"), 1);
}

TEST(ScrabbleScoreTestSuite, word)
{
  ASSERT_EQ(getScoreFromScrabble("zebra"), 16);
}

TEST(ScrabbleScoreTestSuite, normalWordProbably)
{
  ASSERT_EQ(getScoreFromScrabble("LaDyBuG"), 14);
}

TEST(ScrabbleScoreTestSuite, sentenceWithWhiteCharacters)
{
  ASSERT_EQ(getScoreFromScrabble("Normalne zdanie   z tabulatorem i wykrz !"), 76);
}

TEST(ScrabbleScoreTestSuite, sentenceWithPolishCharacters)
{
  ASSERT_EQ(getScoreFromScrabble("Zażółć gęślą jaźń."), 23);
}
