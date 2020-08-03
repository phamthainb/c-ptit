#include <bits/stdc++.h>

using namespace std;

long long k, a, b;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        cin >> k >> a >> b;
        vector<int> result;
        int remind = 0;
        while (a > 0 || b > 0)
        {
            int temp = (a % 10 + b % 10) + remind;
            remind = temp / k;          // chia dư cho hệ cơ số K
            result.push_back(temp % k); //
            a /= 10;
            b /= 10;
        }
        if (remind != 0)
            result.push_back(remind);
        //cout
        for (int i = result.size() - 1; i >= 0; i--)
            cout << result[i];
        cout << endl;
    }
    return 0;
}