/**
 * SẮP XẾP VÀ TÌM KIẾM
*/

#include <bits/stdc++.h>
using namespace std;
//init
int n, x, a[100005];
//function
bool absCheck(int a, int b)
{
    return abs(x - a) < abs(x - b);
}
//input
void _input()
{
    memset(a, 0, sizeof(a));
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void _solo()
{
    stable_sort(a, a + n, absCheck);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
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
    return 0;
}