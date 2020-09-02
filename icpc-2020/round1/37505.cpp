/**
* P201PROJ - Just a math
*/
#include <bits/stdc++.h>
using namespace std;

long long a, b;

long long gen(long long x, long long y)
{
    long long rs = 0;

    while (x > 0)
    {
        rs = rs * 10 + x % 10;
        x /= 10;
    }
    long long g = 0, yc = y;
    while (y > 0)
    {
        g++;
        y /= 10;
    }
    rs = rs * pow(10, g) + yc;
    return rs;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> a >> b;
        long long rs = 0;
        for (long long i = 1; i <= a; i++)
        {
            for (long long j = i + 1; j <= b; j++)
            {
                long long temp1 = i * j + i + j;
                long long temp2 = gen(i, j);
                if (temp1 == temp2)
                    rs++;
            }
        }
        cout << rs << endl;
    }
    return 0;
}