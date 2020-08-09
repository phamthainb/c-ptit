
//tplt
#include <bits/stdc++.h>
using namespace std;

int v, e;
int mark[1005], mt[1005][1005];

void dfs(int s)
{
    mark[s] = 1;
    for (int i = 1; i <= v; i++)
        if (mark[i] == 0 && mt[s][i] == 1)
            dfs(i);
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        memset(mt, 0, sizeof(mt));
        memset(mark, 0, sizeof(mark));
        cin >> v >> e;
        for (int i = 1; i <= e; i++)
        {
            int a, b;
            cin >> a >> b;
            mt[a][b] = 1;
            mt[b][a] = 1;
        }
        int rs = 0;
        for (int i = 1; i <= v; i++)
        {
            if (mark[i] == 0)
            {
                dfs(i);
                rs++;
            }
        }
        cout << rs << endl;
    }
}