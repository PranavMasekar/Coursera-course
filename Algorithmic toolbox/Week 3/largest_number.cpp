#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::vector;
using std::string;

bool compare(string a, string b) {
    string x=a+b, y=b+a;
    return x>y;
}
vector<string> largest_number(vector<string> a) {
  sort(a.begin(),a.end(),compare);
  return a;
}

int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  vector<string> ans = largest_number(a);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i];
  }
}
