//Code By PMD
#include<iostream>
#include<math.h>
using namespace std;
/*
   giong voi sang nguyen to
*/
const int N = 1e6 + 5;
long long n;
int least_prime[N];
void leastPrimeFactor(){
    for(int i = 1 ; i < N ; i++) least_prime[i] = 0;
    least_prime[1] = 1;
    for (int i = 2; i <  N ; i++){
        if (least_prime[i] == 0){ 
            least_prime[i] = i;
            for (int j = i * 2;  j < N; j += i)
                if (least_prime[j] == 0)
                    least_prime[j] = i;
        }
    }
}
void input(){
	cin >> n;
}
 
void solve(){
	for(int i = 1; i <= n ; i++)
        cout << least_prime[i] << ' ';
	cout << endl;
}

int main(){
    int t=1; 
    cin>>t;
    leastPrimeFactor();
    while(t--){
        input();
        solve();
    }
    return 0;
}
//Code By PMD
 