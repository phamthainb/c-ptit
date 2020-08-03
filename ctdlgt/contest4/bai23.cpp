#include <bits/stdc++.h>

using namespace std;

long long n, k;

int solo(long long n, long long k)
{
    if (k == 1)
        return 1;
    long long middle = pow(2, n - 1); // the middle always equal n
    if (k == middle)
        return n;
    else if (k < middle)
        return solo(n - 1, k);
    else
        return solo(n - 1, k - middle);
}
int main()
{

    int times;
    cin >> times;
    while (times--)
    {
        cin >> n >> k;
        cout << solo(n, k) << endl;
    }
}