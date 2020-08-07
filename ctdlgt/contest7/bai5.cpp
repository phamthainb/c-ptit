#include <bits/stdc++.h>
using namespace std;
//init
string s;

int _solo()
{
    int rs = 0;
    stack<int> mark;
    mark.push(-1); //init base
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            mark.push(i);
        else
        {
            mark.pop();
            if (mark.empty())
                mark.push(i);
            else
                rs = max(rs, i - mark.top());
        }
    }
    return rs;
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        cin >> s;
        cout << _solo() << endl;
    }
    return 0;
}