/**
 * 
*/

#include <bits/stdc++.h>
using namespace std;
//const
//init
int st[100005], top = 0;
//function
//input
void _input()
{
    string s;
    cin >> s;
    if (s == "PUSH")
    {
        int x;
        cin >> x;
        st[top++] = x;
    }
    else if (s == "POP")
    {
        if (top != 0)
            top--;
    }
    else
    {
        if (top == 0)
            cout << "NONE";
        else
            cout << st[top - 1];
        cout << endl;
    }
}

int main()
{
    int times;
    cin >> times;
    while (times--)
        _input();
    return 0;
}