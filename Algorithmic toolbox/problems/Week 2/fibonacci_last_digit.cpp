#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int first = 0;
    int second =1;
    int temp;
    for(int i=2;i<=n;i++){
        temp = (first + second)%10;
        first = second;
        second = temp;
    }
    cout<<second;
    return 0;
}