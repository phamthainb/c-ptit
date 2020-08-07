/**
 * Ngăn xếp
*/

#include <bits/stdc++.h>
using namespace std;
//const
//init
string s;
int top = 0, a[100005];
//function
void show()
{
    if (top == 0)
        cout << "empty" << endl;
    else
    {
        for (int i = 0; i < top; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
//input
void _input()
{

    while (cin >> s)
    {
        if (s == "push") //push
        {
            int temp;
            cin >> temp;
            a[top++] = temp;
        }
        else if (s == "pop") //pop
            top--;
        else
            show();
    }
}

int main()
{
    _input();
    return 0;
}