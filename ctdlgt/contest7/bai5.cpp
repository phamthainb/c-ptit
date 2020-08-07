#include <bits/stdc++.h>
using namespace std;
//init
string s;

bool _solo()
{
    stack<char> listChar;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
            listChar.push(s[i]);
        else
        {
            if (listChar.empty())
                return false;
            char tag = listChar.top();
            if (s[i] == '}' && tag != '{')
                return false;
            else if (s[i] == ']' && tag != '[')
                return false;
            else if (s[i] == ')' && tag != '(')
                return false;
            listChar.pop();
        }
    }
    return true;
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        cin >> s;
        _solo() ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}