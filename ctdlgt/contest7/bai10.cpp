#include <bits/stdc++.h>
using namespace std;
string p1, p2;

string raw(string str) // rm all tag "(,)" of str
{
    stack<char> list;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            list.push(i);
        else if (str[i] == ')')
        {
            int openTag = list.top();
            list.pop(); //rm open tag
            if (openTag != 0 && str[openTag - 1] == '-')
            {
                for (int j = openTag + 1; j < i; j++) //swap all of -, + inside bwt ()
                {
                    if (str[j] == '+')
                        str[j] = '-';
                    else if (str[j] == '-')
                        str[j] = '+';
                }
            }
        }
    }
    string rs = "";
    for (int i = 0; i < str.size(); i++)
        if (str[i] != '(' && str[i] != ')')
            rs += str[i];

    return rs;
}
int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        cin >> p1 >> p2;
        string a = raw(p1), b = raw(p2);
        (a == b) ? cout << "YES" << endl
                 : cout << "NO" << endl;
    }
}