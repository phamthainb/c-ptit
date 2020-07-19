//bai 2, sum min
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int times;
  cin >> times;
  while (times--)
  {
    int a, b;
    cin >> a >> b;
    // cout<<a<<b<<endl;
    int sum, maxx, minn, count = 1;
    sum = a + b;
    maxx = sum;
    minn = sum;

    //slove{}
    while(a != 0){
      if(a%10==5) maxx+=count;
      if(a%10==6) minn-=count;
      a/=10;
      count*=10;
    }

    count = 1;
     while(b != 0){
      if(b%10==5) maxx+=count;
      if(b%10==6) minn-=count;
      b/=10;
      count*=10;
    }
    
    cout<<minn<<" "<<maxx<<endl;
  }

  return 0;
}