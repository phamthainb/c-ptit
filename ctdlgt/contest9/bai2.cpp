#include <bits/stdc++.h>

using namespace std;

int vertices, temp = 0;
string listNext;
vector<vector<int>> storeNext(100);

void splitInput(string listNext, int index)
{
  for (int i = 0; i <= listNext.size(); i++)
  {
    if (listNext[i] == ' ' || i == listNext.size())
    {
      storeNext[index].push_back(temp);
      temp = 0;
    }
    else
      temp = temp * 10 + (listNext[i] - '0');
  }
}

void Input()
{
  cin >> vertices;
  cin.ignore();
  for (int i = 1; i <= vertices; i++)
  {
    getline(cin, listNext);
    splitInput(listNext, i);
  }
}

void Solo()
{
  for (int i = 1; i <= vertices; i++)
  {
    sort(storeNext[i].begin(), storeNext[i].end());
    for (int j = 0; j < storeNext[i].size(); j++)
      if (storeNext[i][j] > i)
        cout << i << " " << storeNext[i][j] << endl;
  }
}

int main()
{
  Input();
  Solo();
  return 0;
}