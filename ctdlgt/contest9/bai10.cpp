#include <bits/stdc++.h>
using namespace std;

int mt[1005][1005], truoc[1005];
int v, e, s, d;

void dfs()
{
    stack<int> list;
    list.push(s);
    truoc[s] = 1;
    while (!list.empty())
    {
        int top = list.top();
        list.pop();
        for (int i = 1; i <= v; i++)
        {
            if (truoc[i] == 0 && mt[top][i] == 1)
            {
                list.push(top);
                list.push(i);
                truoc[i] = top;
                break;
            }
        }
    }
}
void path()
{
    if (truoc[d] == 0)
        cout << "-1" << endl;
    else
    {
        int tmp = d, rs[1005] = {0}, j = 0;
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
        memset(truoc, 0, sizeof(truoc));
        cin >> v >> e >> s >> d;
        for (int i = 1; i <= e; i++)
        {
            int a, b;
            cin >> a >> b;
            mt[a][b] = 1;
            mt[b][a] = 1;
        }
        dfs();
        path();
    }
}