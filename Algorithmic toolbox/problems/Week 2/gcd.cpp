#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a , long long b){
  if (b == 0)
        return a;
    else
        return GCD (b, a % b);
}

int main(){
  long long a,b;
  cin>>a>>b;
  long long res = GCD(a,b);
  cout<<res;
  return 0;
}