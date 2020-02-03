#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(OddTest, HandlesOdd) {
  Solution solution;
  std::vector<int> inputs1 = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  solution.MedianSort(inputs1);
  std::vector<int> actual = inputs1;
  std::vector<int> expected = { 43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99 };
  EXPECT_EQ(actual, expected);
}

TEST(EvenTest, HandlesEven) {
  Solution solution;
  std::vector<int> inputs2 = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500, 70};
  solution.MedianSort(inputs2);
  std::vector<int> actual = inputs2;
  std::vector<int> expected = {69, 43, 43, 21,10, 7, 0, 900, 637, 500, 231, 123, 99 ,70};
  EXPECT_EQ(actual, expected);
}

TEST(EmptyTest, HandlesEmpty) {
  Solution solution;
  std::vector<int> inputs1 = {};
  solution.MedianSort(inputs1);
  std::vector<int> actual = inputs1;
  std::vector<int> expected = {};
  EXPECT_EQ(actual, expected);
}