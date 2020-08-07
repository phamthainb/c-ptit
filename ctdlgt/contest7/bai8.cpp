#include <bits/stdc++.h>
using namespace std;
string s;
int _solo()
{
    stack<char> list;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            int openTag = list.top();
            list.pop(); // rm open tag (
            if (openTag != 0 && s[openTag - 1] == '-')
            {
                for (int j = i - 1; j > openTag; j--)
                    if (s[j] == '-')
                        s[j] = '+';
                    else if (s[j] == '+')
                        s[j] = '-';
            }
        }
        else if (s[i] == '(')
            list.push(i);
    }
    for (int i = 0; i < s.size(); i++)
        if (s[i] != ')' && s[i] != '(')
            cout << s[i];
    cout << endl;
}
int main()
{

    int times;
    cin >> times;
    while (times--)
    {
        cin >> s;
        _solo();
    }
}