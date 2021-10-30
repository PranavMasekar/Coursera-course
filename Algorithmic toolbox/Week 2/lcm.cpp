#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n,m;
  cin>>n>>m;
  int i=1;
  long long sum;
  while(1){
    sum = n * i;
    if(sum%m==0){
      cout<<sum;
      break;
    }
    i++;
  }
  return 0;
}     