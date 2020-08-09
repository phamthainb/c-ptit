/**
 * Hậu tố về trung tố
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
        stack<string> list;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
            {
                string a = list.top();
                list.pop();
                string b = list.top();
                list.pop();
                list.push("(" + b + s[i] + a + ")");
            }
            else
                list.push(string(1, s[i]));
        }
        cout << list.top() << endl;
    }
}