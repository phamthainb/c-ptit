#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[10005][10005];
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 1)
                cout << j << " ";
        }
        cout << endl;
    }
}