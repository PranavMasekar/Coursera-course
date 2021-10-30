#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long > v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long  sum = v[n-1] * v[n-2];
    cout<<sum;
    return 0;
}