#include <bits/stdc++.h>
using namespace std;
long pisano(long m)
{
    long prev = 0;
    long curr = 1;
    long res = 0;
 
    for(int i = 0; i < m * m; i++)
    {
        long temp = 0;
        temp = curr;
        curr = (prev + curr) % m;
        prev = temp;
 
        if (prev == 0 && curr == 1)
            res = i + 1;
    }
    return res;
}
int main(){
    long long n;
    cin>>n;
    long long first = 0;
    long long second =1;
    if(n==0){
        cout<<0;
        return 0;
    }
    if(n==1){
        cout<<1;
        return 0;
    }
    long long sum = 1;
    long long k =n%pisano(n);
    long long temp;
    for(int i=0;i<k-1;i++){
        temp = second;
        first = temp;
        second = (first+second)%10;
        sum += second;
    }
    cout<<sum%10;
    return 0;
}