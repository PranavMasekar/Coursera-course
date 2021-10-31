#include <bits/stdc++.h>
using namespace std;
long pisano(long m)
{
    long prev = 0;
    long curr = 1;
    long res = 0;

    for (int i = 0; i < m * m; i++)
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

long long getFibonaccisum(long long n)
{
    if (n < 1)
        return n;
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    long long sum=1;
    for(int i=2;i<=n;i++){
        fib[i] = (fib[i-1] + fib[i-2])%10;
        long long x = fib[i]*fib[i];
        sum +=x;
    }
    return sum;
}

int main()
{
    long long n;
    cin >> n;
    long long k =n % 60;
    long long res = getFibonaccisum(k);
    cout<<res%10;
    return 0;
}