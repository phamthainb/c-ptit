#include <bits/stdc++.h>

using namespace std;

int n, q, a[100];

void input()
{
  cin >> n >> q;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  // sort(a, a + n);
}
int solve(int a[], int l, int r, int q)
{
  int mid = (l + r) / 2;
  if (l > r)
    return -1;
  if (a[mid] == q)
    return mid;
  else if (a[mid] > q)
    return solve(a, l, mid - 1, q);
  else
    return solve(a, mid + 1, r, q);
}
int main()
{
  int times;
  cin >> times;
  while (times--)
  {
    input();
    if (solve(a, 1, n, q) < 0)
      cout << "NO" << endl;
    else
      cout << solve(a, 1, n, q) << endl;
  }

  return 0;
}