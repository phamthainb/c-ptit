//dfs

#include <bits/stdc++.h>

using namespace std;

int vertices, edges, startVertice, x, y;
int mark[1005] = {0}, matrix[1005][1005];

void Input()
{
    memset(mark, 0, sizeof(mark));
    cin >> vertices >> edges >> startVertice;

    for (int i = 1; i <= vertices; i++)
        for (int j = 1; j <= vertices; j++)
            matrix[i][j] = 0;

    //input for list edges
    for (int i = 1; i <= edges; i++)
    {
        cin >> x >> y;
        matrix[x][y] = 1;
        matrix[y][x] = 1;
    }
}

void DFS_dequy(int start) //de quy
{
    cout << start << " ";
    mark[start] = 1;
    for (int i = 1; i <= vertices; i++)
        if (matrix[start][i] == 1 && mark[i] == 0)
            DFS_dequy(i);
}
void DFS_stack(int start) //stack
{
    cout << start << " ";
    stack<int> pathTrip;
    pathTrip.push(start);
    mark[start] = 1;
    while (!pathTrip.empty())
    {
        int top = pathTrip.top();
        pathTrip.pop();
        for (int i = 1; i <= vertices; i++)
            if (matrix[top][i] == 1 && mark[i] == 0)
            {
                pathTrip.push(top);
                pathTrip.push(i);
                mark[i] = 1;
                cout << i << " ";
                break;
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
        // DFS_dequy(startVertice);
        DFS_stack(startVertice);
        cout << endl;
    }
    return 0;
}