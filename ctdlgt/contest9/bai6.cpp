#include <bits/stdc++.h>
using namespace std;

int v, e, s;
int mark[1005] = {0}, mt[1005][1005];

void dfs(int s)
{
    cout << s << " ";
    mark[s] = 1;
    for (int i = 1; i <= v; i++)
    {
        if (mark[i] == 0 && mt[s][i] == 1)
            dfs(i);
    }
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        cin >> v >> e >> s;
        memset(mark, 0, sizeof(mark));
        memset(mt, 0, sizeof(mt));
        for (int i = 1; i <= e; i++)
        {
            int a, b;
            cin >> a >> b;
            mt[a][b] = 1;
            // mt[b][a] = 1;
        }
        dfs(s);
        cout << endl;
    }
}