#include <bits/stdc++.h>
using namespace std;

int v, e, s;
int mark[1005], mt[1005][1005];

void bfs(int s)
{
    queue<int> list;
    list.push(s);
    mark[s] = 1;
    cout << s << " "; //tham dinh s
    while (!list.empty())
    {
        int top = list.front();
        list.pop(); //rm
        for (int i = 1; i <= v; i++)
        {
            if (mark[i] == 0 && mt[top][i] == 1)
            {
                list.push(i);
                mark[i] = 1;
                cout << i << " ";
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
        memset(mark, 0, sizeof(mark));
        memset(mt, 0, sizeof(mt));
        cin >> v >> e >> s;
        for (int i = 1; i <= e; i++)
        {
            int a, b;
            cin >> a >> b;
            mt[a][b] = 1;
            mt[b][a] = 1;
        }
        bfs(s);
        cout << endl;
    }
}