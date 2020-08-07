/**
 * 
*/

#include <bits/stdc++.h>
using namespace std;
//const
//init
bool flag = true;
//function
//input
void checkCloseTag()
{
    flag = false;
}
void _input()
{
    flag = true;
    int s;
    cin >> s;
    for (int i = 0; i <= s && flag; i++)
    {
        if (i == 2)
            checkCloseTag();
        cout << i << " ";
    }
    cout << endl;
}
void _solo()
{
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        _input();
        // _solo();
    }
    return 0;
}