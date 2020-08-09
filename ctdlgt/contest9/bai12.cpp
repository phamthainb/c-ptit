//bfs find path from s to t
#include <bits/stdc++.h>
using namespace std;

int v, e, s, t;
int mark[1005], mt[1005][1005], truoc[1005];

void bfs()
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
                truoc[i] = top;
            }
        }
    }
}
void path()
{
    if (truoc[t] == 0)
        cout << "-1" << endl;
    else
    {
        int tmp = t, rs[1005], j = 0;
        while (tmp != s)
        {
            rs[j++] = tmp;
            tmp = truoc[tmp];
        }
        rs[j++] = s;
        //print
        for (int k = j - 1; k >= 0; k--)
            cout << rs[k] << " ";
        cout << endl;
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
        memset(truoc, 0, sizeof(truoc));

        cin >> v >> e >> s >> t;
        for (int i = 1; i <= e; i++)
        {
            int a, b;
            cin >> a >> b;
            mt[a][b] = 1;
            mt[b][a] = 1;
        }
        bfs();
        path();
    }
}