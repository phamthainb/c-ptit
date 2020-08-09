/**
 * Tiền tố => hậu tố 
 * => Tiền tố => Trung tố => Hậu tố
*/

#include <bits/stdc++.h>
using namespace std;

string tttt(string s)
{
    //tiền tố => trung tố
    stack<string> list;
    for (int i = s.size(); i >= 0; i--)
    {
        if (s[i] == '-' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
        {
            string a = list.top();
            list.pop();
            string b = list.top();
            list.pop();
            list.push("(" + a + s[i] + b + ")");
        }
        else
            list.push(string(1, s[i]));
    }
    return list.top();
}
int check(char s)
{
    if (s == '^')
        return 5;
    if (s == '*' || s == '/')
        return 4;
    if (s == '-' || s == '+')
        return 3;
    return 2;
}
string ttht(string s)
{ // trung tố => hậu tố
    stack<char> list;
    string rs = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            list.push(s[i]);
        else if (s[i] == ')')
        {
            //get all inside bwt ()
            while (list.size() && list.top() != '(')
            {
                rs += list.top();
                list.pop();
            }
            list.pop(); //rm open tag
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
        {
            while (list.size() && (check(list.top()) >= check(s[i])))
            {
                rs += list.top();
                list.pop();
            }
            //push current operator into stack
            list.push(s[i]);
        }
        else
            rs += s[i];
    }
    return rs;
}
int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        string s, rs;
        cin >> s;
        rs = tttt(s);
        cout << ttht(rs) << endl;
    }
}