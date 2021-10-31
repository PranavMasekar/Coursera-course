#include <bits/stdc++.h>
using namespace std;
long pisano(long m)
{
    long prev = 0;
    long curr = 1;
    long res=0;
    for (int i = 0; i < m * m; i++)
    {
        long temp = 0;
        temp = curr;
        curr = (prev + curr) % m;
        prev = temp;

        if (prev == 0 && curr == 1)
        {
            // cout << "pisano running" << endl;
            res = i + 1;
        }
    }
    return res;
}

long long getFibonacci(long long n,long long m)
{
    if (n < 1)
        return n;
    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = (fib[i - 1] + fib[i - 2]) % m;
    }

    return fib[n];

    // for (int i = 0; i < n - 1; i++)
    // {
    //     long long temp = 0;
    //     temp = curr;
    //     curr = (prev + curr);
    //     prev = temp;
    // }
    // cout << "GetFibonacci running" << endl;
    // return curr;
}
int main()
{
    long long n;
    long long m;
    cin >> n;
    cin >> m;
    long long k = n % pisano(m);
    cout << getFibonacci(k,m) % m;
    return 0;
}