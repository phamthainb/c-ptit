/**
 * giải thuật quy hoạch động
 * 
*/

#include <bits/stdc++.h>
using namespace std;
//init
int n, s, a[205], rs[40005];

void input()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}
void solo()

{
    memset(rs, 0, sizeof(rs));
    rs[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= a[i]; j--)
        {
            if (rs[j] == 0 && rs[j - a[i]] == 1)
            {
                rs[j] = 1;
            }
        }
    }
    (rs[s] == 1) ? cout << "YES\n" : cout << "NO\n";
}
int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        input();
        solo();
    }
}