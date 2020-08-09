
//tplt
#include <bits/stdc++.h>
using namespace std;

int v, e;
int mark[1005], mt[1005][1005];

void bfs(int s)
{
    queue<int> list;
    list.push(s);
    mark[s] = 1;
    while (!list.empty())
    {
        int top = list.front();
        list.pop();
        for (int i = 1; i <= v; i++)
        {
            if (mark[i] == 0 && mt[top][i] == 1)
            {
                list.push(i);
                mark[i] = 1;
            }
        }
    }
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
                bfs(i);
                rs++;
            }
        }
        cout << rs << endl;
    }
}