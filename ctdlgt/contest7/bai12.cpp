/**
 * Tiền tố => trung tố
 * Duyệt từ cuối lên
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        string s;
        cin >> s;
        stack<string> rs;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' || s[i] == '%')
            {
                string a = rs.top();
                rs.pop();
                string b = rs.top();
                rs.pop();
                string tmp = "(" + a + s[i] + b + ")";
                rs.push(tmp);
            }
            else
                rs.push(string(1, s[i]));
        }
        cout << rs.top() << endl;
    }
}