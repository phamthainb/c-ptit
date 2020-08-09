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

bool checkTRU(int u)
{
    memset(mark, 0, sizeof(mark));
    mark[u] = 1; // da xet

    if (u == 1)
        dfs(2);
    else
        dfs(1);

    for (int i = 1; i <= v; i++)
        if (mark[i] == 0)
            return true;
    return false;
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        cin >> v >> e;
        for (int i = 1; i <= e; i++)
        {
            int a, b;
            cin >> a >> b;
            mt[a][b] = 1;
            mt[b][a] = 1;
        }
        for (int i = 1; i <= v; i++)
            if (checkTRU(i))
                cout << i << " ";
        cout << endl;
    }
}