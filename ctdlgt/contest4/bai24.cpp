#include <bits/stdc++.h>

using namespace std;

long long n, mod = 123456789, result;

// return 2^(n)
int solo(long long n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    long long temp = solo(n / 2) % mod;
    if (n % 2 == 0)
        return temp * temp % mod;
    else
        return (temp * temp % mod) * 2 % mod;
}
int main()
{

    int times;
    cin >> times;
    while (times--)
    {
        cin >> n;
        cout << solo(n - 1) << endl;
    }
}