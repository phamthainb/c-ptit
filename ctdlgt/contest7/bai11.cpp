/**
 * Trung tố => hậu tố
 * Duyệt từ đầu đến cuối chuỗi s
 * + s[i] = '(', thêm s[i] vào stack
 * + s[i] = ')', lấy toàn bộ toán hạng từ dấu đóng đến dấu mở, cho vào rs
 * + s[i] = các toán tử, so sánh với các toán tử đã có trong stack, 
 *          lấy ra hết các toán tử có đk cao hơn s[i] trong stack cho vào rs
 *          => rồi mới push s[i] vào stack
 * + s[i] = các toán hạng, thêm s[i] vào stack
*/
#include <bits/stdc++.h>
using namespace std;

string s;
int check(char s)
{
    if (s == '^')
        return 5;
    if (s == '*' || s == '/' || s == '%')
        return 4;
    if (s == '+' || s == '-')
        return 3;
    return 2;
}
string _solo()
{
    string rs = "";
    stack<char> list;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        { //get all agr bwt ()
            while (!list.empty() && list.top() != '(')
            {
                rs += list.top();
                list.pop();
            }
            list.pop(); //rm open tag
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
        {
            while (!list.empty() && (check(list.top()) >= check(s[i])))
            { // get all operator from stack to rs t/m condition
                rs += list.top();
                list.pop();
            }
            //push new operator into stack
            list.push(s[i]);
        }
        else if (s[i] == '(')
            list.push(s[i]);
        else
            rs += s[i];
    }
    //get all agr exits to rs, ex '('
    while (!list.empty() && list.top() != '(')
    {
        rs += list.top();
        list.pop();
    }
    return rs;
}
int main()
{
    int times;
    cin >> times;
    cin.ignore();
    while (times--)
    {
        cin >> s;
        cout << _solo() << endl;
    }
}