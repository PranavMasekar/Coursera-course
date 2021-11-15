#include <iostream>
#include <vector>
#include<cmath>

using std::vector;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  int add=1;
  while(n>0){
    if(n<add){
      summands[summands.size()-1] += n;
      break;
    }
    else{
      summands.push_back(add);
      n -= add;
    }
    add++;
  }
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
