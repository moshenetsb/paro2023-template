#include "gtest/gtest.h"
#include "day-of-year.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, January1stIsFirstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}

TEST(DayOfYearTestSuite, December31stIsLastDayOfYear)
{
  ASSERT_EQ(dayOfYear(12, 31, 2021), 365);
}

TEST(DayOfYearTestSuite, December31stIsLastDayOfYearOnLeapYear)
{
  ASSERT_EQ(dayOfYear(12, 31, 2020), 366);
}

TEST(DayOfYearTestSuite, February29thExistsOnALeapYear)
{
  ASSERT_EQ(dayOfYear(2, 29, 2020), 60);
}

TEST(DayOfYearTestSuite, YearsDivisibleBy4AreGenerallyLeapYears)
{
  ASSERT_EQ(dayOfYear(3, 11, 1976), 71);
}

TEST(DayOfYearTestSuite, YearsDivisibleBy100AreGenerallyNotLeapYears)
{
  ASSERT_EQ(dayOfYear(3, 11, 1900), 70);
}

TEST(DayOfYearTestSuite, YearsDivisibleBy400AreLeapYears)
{
  ASSERT_EQ(dayOfYear(3, 11, 2000), 71);
}

TEST(DayOfYearTestSuite, LeapYearDoesntAffectDaysBeforeFebruary29th)
{
  ASSERT_EQ(dayOfYear(2, 8, 1976), 39);
}