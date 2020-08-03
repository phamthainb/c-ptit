#include <bits/stdc++.h>

using namespace std;
#define modulo 1000000007;

long long expow(int n, int k)
{
  if (k == 0)
    return 1;
  if (k == 1)
    return n;
  long long temp = expow(n, k / 2);
  if (k % 2 == 0)
  {
    return temp * temp % modulo;
  }
  else
  {
    long long fuckman = temp * temp % modulo;
    return fuckman * n % modulo;
  }
}

int main()
{
  int times;
  cin >> times;
  while (times--)
  {
    int n, k;
    cin >> n >> k;
    cout << expow(n, k) << endl;
  }
  return 0;
}