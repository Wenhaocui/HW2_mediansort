#include "solution.h"
#include <iostream>

void Solution::MedianSort(std::vector<int> &inputs){
  if (inputs.size() == 0) {
    std::cout << "{}"<<std::endl;
  }

  int n = inputs.size();
  std::sort(inputs.begin(), inputs.end());
  
  if(n % 2 == 1)
  {
    std::reverse(inputs.begin(), inputs.begin()+n/2);
    std::reverse(inputs.begin()+(n+1)/2, inputs.end());
  }else{ 
    std::reverse(inputs.begin(), inputs.begin()+n/2);
    std::reverse(inputs.begin()+(n/2), inputs.end());
  }
  std::vector<int>::iterator it;
  for (it = inputs.begin(); it != inputs.end(); ++it) {
      int n = *it;
      std::cout << n << " ";
  }
  std::cout << std::endl;
}