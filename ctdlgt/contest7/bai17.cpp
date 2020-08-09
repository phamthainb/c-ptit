/**
 * Tiền tố
*/
#include <bits/stdc++.h>
using namespace std;

int cal(int a, int b, char op)
{
    if (op == '^')
        return pow(a, b);
    if (op == '%')
        return a % b;
    if (op == '-')
        return a - b;
    if (op == '+')
        return a + b;
    if (op == '*')
        return a * b;
    if (op == '/')
        return a / b;
}
int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        string s;
        cin >> s;
        stack<int> list;
        for (int i = s.size(); i >= 0; i--)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
            {
                int a = list.top();
                list.pop();
                int b = list.top();
                list.pop();
                int temp = cal(a, b, s[i]);
                list.push(temp);
            }
            else
                list.push(s[i] - '0');
        }
        cout << list.top() << endl;
    }
}