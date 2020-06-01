#include <bits/stdc++.h>

using namespace std;
#define modulo 1e9 + 7;

int main()
{
  int times;
  cin >> times;
  while (times--)
  {
    int n, k, temp = 1;
    cin >> n >> k;
    while (k--)
    {
      temp = (int)(temp * n) % modulo;
    }
    cout << temp << endl;
  }
  return 0;
}