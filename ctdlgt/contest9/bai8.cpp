//bfs
#include <bits/stdc++.h>

using namespace std;
int vertices, edges, startVertice, x, y;
int mark[1000] = {0}, matrix[1000][1000];

void Input()
{
    memset(mark, 0, sizeof(mark));
    memset(matrix, 0, sizeof(matrix));
    cin >> vertices >> edges >> startVertice;
    for (int i = 1; i <= edges; i++)
    {
        cin >> x >> y;
        matrix[x][y] = 1;
        matrix[y][x] = 1;
    }
}
void BFS(int start)
{
    queue<int> list;
    list.push(start);
    mark[start] = 1;
    cout << start << " ";
    while (!list.empty())
    {
        int top = list.front();
        list.pop();
        for (int i = 1; i <= vertices; i++)
            if (matrix[top][i] == 1 && mark[i] == 0)
            {
                list.push(i);
                mark[i] = 1;
                cout << i << " ";
            }
    }
}
int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        Input();
        BFS(startVertice);
        cout << endl;
    }
    return 0;
}