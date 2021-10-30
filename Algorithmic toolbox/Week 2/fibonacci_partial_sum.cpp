#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;
    long long first = 0;
    long long second =1;
    long long sum = 1;
    long long temp;
    for(int i=2;i<=n;i++){
        temp = (first + second)%10;
        sum = sum+temp;
        first = second;
        second = temp;
    }
     first = 0;
     second =1;
    long long sum2 = 1;
    long long temp2;
    for(int i=2;i<=m;i++){
        temp2 = (first + second)%10;
        sum2 = sum+temp2;
        first = second;
        second = temp2;
    }
    cout<<(sum2-sum)%10;
    return 0;
}