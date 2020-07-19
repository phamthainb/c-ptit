#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
  int n;
  cin >> n;
  while (n--)
  {
    int value; cin >> value;
    int result = 0;
    for(int i = 9; i >= 0; i--){
      if(value >= a[i]){
       result += (value/a[i]);
       value -= a[i]*(value/a[i]);
      }
    }
    cout<<"result : "<<result<<endl;
  }
  return 0;
}