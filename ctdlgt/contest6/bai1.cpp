/**
 * SẮP XẾP VÀ TÌM KIẾM
*/

#include <bits/stdc++.h>
using namespace std;
//init
int a[1005], n;
//input
void _input()
{
    memset(a, 0, sizeof(a));
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void _solo()
{
    sort(a, a + n);
    for (int i = 0, j = n - 1; i<n, j>= i; i++, j--)
    {
        if (j != i)
            cout << a[j] << " " << a[i] << " ";
        else
            cout << a[j] << endl;
    }
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        _input();
        _solo();
    }
}