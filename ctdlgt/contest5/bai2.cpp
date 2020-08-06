/**
 * giải thuật quy hoạch động
 * 
*/

#include <bits/stdc++.h>
using namespace std;
//init
int n, a[1005];

//logic
void solo()
{
    int maxx = 1, rs[1005] = {1};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                rs[i] = max(rs[i], rs[j] + 1);
            }
        }
        maxx = max(maxx, rs[i]);
    }
    cout << maxx << endl;
}
int main()
{
    // int times;
    // cin >> times;
    // while (times--)
    // {
    //input
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    solo();
    // }
    return 0;
}