#include <bits/stdc++.h>
using namespace std;
//init
string s;

string _solo()
{
    stack<char> sta;
    bool rs = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            bool check = true;
            while (sta.top() != '(')
            {
                char top = sta.top();
                sta.pop();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                    check = false;
            }
            sta.pop(); // rm open tag (
            if (check) //if no has +, -, *, / inside bwt () => rs = true
            {
                rs = true;
                break;
            }
        }
        else
            sta.push(s[i]);
    }
    return (rs ? "Yes" : "No");
}

int main()
{
    int times;
    cin >> times;
    cin.ignore();
    while (times--)
    {
        getline(cin, s);
        // cout << s << endl;
        cout << _solo() << endl;
    }
    return 0;
}