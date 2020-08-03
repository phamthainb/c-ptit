#include <bits/stdc++.h>

using namespace std;

long long Fibonaci[95];
long long n, k;

//init list Fibonaci
void initFibonaci()
{
    Fibonaci[1] = Fibonaci[2] = 1;
    for (int j = 3; j < 93; j++)
        Fibonaci[j] = Fibonaci[j - 1] + Fibonaci[j - 2];
}
//find the char I of the N times
char findChar(long long n, long long i)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (i > Fibonaci[n - 2])
        return findChar(n - 1, i - Fibonaci[n - 2]);
    else //if (i <= Fibonaci[n - 2])
        return findChar(n - 2, i);
}
int main()
{
    int times;
    cin >> times;
    initFibonaci();
    while (times--)
    {
        cin >> n >> k;
        cout << findChar(n, k) << endl;
    }
    return 0;
}