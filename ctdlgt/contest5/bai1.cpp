/**
 * giải thuật quy hoạch động
 * Dùng 1 mảng 2 chiều để lưu kết quả
 * loop 
*/

#include <bits/stdc++.h>
using namespace std;
//init
string s1, s2;
int result[1005][10005];

void solo()
{
  memset(result, 0, sizeof(result));
  //loop
  for (int i = 1; i <= s1.length(); i++)
    for (int j = 1; j <= s2.length(); j++)
      if (s1[i - 1] == s2[j - 1])
        result[i][j] = result[i - 1][j - 1] + 1;
      else
        result[i][j] = max(result[i - 1][j], result[i][j - 1]);
  //cout result
  // for (int i = 0; i <= s1.length(); i++)
  // {
  //   for (int j = 0; j <= s2.length(); j++)
  //     cout << result[i][j] << " ";
  //   cout << endl;
  // }
  cout << result[s1.length()][s2.length()] << endl;
}
int main()
{
  int times;
  cin >> times;
  while (times--)
  {
    cin >> s1 >> s2;
    solo();
  }
}