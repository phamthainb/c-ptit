#include <bits/stdc++.h>
using namespace std;
string s;
int _solo()
{

    stack<char> listTags;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            if (listTags.empty())
                listTags.push(s[i]);
            else
            {
                if (listTags.top() == '(')
                    listTags.pop();
                else
                    listTags.push(s[i]);
            }
        }
        else
            listTags.push(s[i]);
    }
    int a = listTags.size(), b = 0;
    while (!listTags.empty())
    {
        if (listTags.top() == ')')
            b++;
        listTags.pop();
    }
    return (a / 2 + b % 2);
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
}