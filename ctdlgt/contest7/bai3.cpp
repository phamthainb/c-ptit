/**
 * 
*/

#include <bits/stdc++.h>
using namespace std;
//const
//init
string s;
//function
//input
void _input()
{
    getline(cin, s);
}
void _solo()
{
    stack<char> word;
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == ' ' || i == s.size())
        {
            while (!word.empty())
            {
                cout << word.top();
                word.pop();
            }
            cout << " ";
        }
        else
            word.push(s[i]);
    }
    cout << endl;
}

int main()
{
    int times;
    cin >> times;
    cin.ignore();
    while (times--)
    {
        _input();
        _solo();
    }
    return 0;
}