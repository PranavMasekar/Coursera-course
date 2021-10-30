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
    long long m;
    cin>>n;
    cin>>m;
    long period =  pisano(m);
    long long k = n%period;
    long long first = 0;
    long long second = 1;
    if(n==0){
        cout<<0;
        return 0;
    }
    if(n==1){
        cout<<1;
        return 0;
    }
    for(int i=0;i<k-1;i++){
        long long temp;
        temp = second;
        second = (first + second)%m;
        first = temp;
    }
    cout<<second%m;
    return 0;
}