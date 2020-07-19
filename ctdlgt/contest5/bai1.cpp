/*
@name  : bai 1
@solve : 
@by    : phamthainb
*/

#include <bits/stdc++.h>
using namespace std;

int f[1000][1000];
string s1, s2;

void init()
{
  cin >> s1 >> s2;
}
void solve()
{
  for (int i = 0; i < s1.length(); i++)
  {
    for (int j = 0; j < s2.length(); j++)
    {
      if (s1[i] == s2[j])
        f[i + 1][j + 1] = f[i][j] + 1;
      else
        f[i + 1][j + 1] = max(f[i][j + 1], f[i + 1][j]);
    }
  }
  cout << f[s1.length()][s2.length()] << endl;
}
int main()
{
  int times;
  cin >> times;
  while (times--)
  {
    init();
    solve();
  }
}