#include <bits/stdc++.h>

using namespace std;

int n, k, a[100005];

int b_search(int left, int right)
{
    if (left > right)
        return -1;
    int middle = (left + right) / 2;
    if (a[middle] == k)
        return middle;
    else
    {
        if (k < a[middle])
            return b_search(left, middle - 1);
        else
            return b_search(middle + 1, right);
    }
}

int main()
{

    int times;
    cin >> times;
    while (times--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int result = b_search(1, n);
        if (result > 0)
            cout << result << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}