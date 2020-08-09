#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  vector<int> rs[55];
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    string s;
    getline(cin, s);
    int tmp = 0, j = 0;
    s += " ";
    while (j < s.size())
    {
      if (s[j] >= '0' && s[j] <= '9')
        tmp = tmp * 10 + (int)(s[j] - '0');
      else if (tmp > 0)
      {
        rs[i].push_back(tmp);
        tmp = 0;
      }
      j++;
    }
  }
  //print
  for (int i = 1; i <= n; i++)
  {
    sort(rs[i].begin(), rs[i].end());
    for (int j = 0; j < rs[i].size(); j++)
    {
      if (rs[i][j] > i)
        cout << i << " " << rs[i][j] << endl;
    }
  }
}