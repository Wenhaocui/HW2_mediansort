#include "src/lib/solution.h"
#include <iostream>
#include <vector>
#include <algorithm>


int main() {
  Solution solution;
  std::vector<int> inputs1 = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  solution.MedianSort(inputs1);

  std::vector<int> inputs2 = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500,70};
  solution.MedianSort(inputs2);

  std::vector<int> inputs3 = {};
  solution.MedianSort(inputs3);
  return 0;
  
}