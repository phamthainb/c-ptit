// liên thông mạnh
#include <bits/stdc++.h>
using namespace std;

int v, e, mt[1005][1005], mark[1005];

void dfs(int u)
{
    mark[u] = 1;
    for (int i = 1; i <= v; i++)
        if (mark[i] == 0 && mt[u][i] == 1)
            dfs(i);
}

bool check(int u)
{
    memset(mark, 0, sizeof(mark));
    dfs(u);
    for (int i = 1; i <= v; i++)
        if (mark[i] == 0)
            return true;
    return false;
}

bool linkStrong()
{
    for (int i = 1; i <= v; i++)
        if (check(i)) //dfs(i) # V
            return false;
    return true;
}
int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        cin >> v >> e;
        memset(mark, 0, sizeof(mark));
        memset(mt, 0, sizeof(mt));

        for (int i = 1; i <= e; i++)
        {
            int a, b;
            cin >> a >> b;
            mt[a][b] = 1;
        }
        cout << (linkStrong() ? "YES" : "NO") << endl;
    }
}