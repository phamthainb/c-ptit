#include <bits/stdc++.h>

using namespace std;

int vertices, edges, x, y;
vector<int> listEdges[100000];
void result()
{
  for (int i = 0; i < 100000; i++)
    listEdges[i].clear();

  cin >> vertices >> edges;

  for (int i = 0; i < edges; i++)
  {
    cin >> x >> y;
    listEdges[x].push_back(y);
    listEdges[y].push_back(x);
  }
  
  for (int i = 1; i <= vertices; i++)
  {
    cout << i << ": ";
    for (int j = 0; j < listEdges[i].size(); j++)
      cout << listEdges[i][j] << " ";
    cout << endl;
  }
}
int main()
{
  int times;
  cin >> times;
  while (times--)
    result();
  return 0;
}