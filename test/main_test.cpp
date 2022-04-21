#include <gtest/gtest.h>
#include <tcal/all.hpp>

// Demonstrate some basic assertions.
TEST(MainTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(tcal::GetLibVersion(), "tcal Lib Version 1.0");
}