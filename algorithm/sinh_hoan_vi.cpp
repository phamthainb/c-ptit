#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int> &a) {
    for (int i=0; i<a.size(); i++) cout << a[i];
    cout << endl;
}

void permute(vector<int> &a, int n) {
    while (true) {
        print(a);
        int k, l;
        for (k = n-2; k>=0; k--) if (a[k] < a[k+1]) break; // Bu?c 1
        if (k<0) break;                                    //
        for (l = n-1; l>k; l--) if (a[k] < a[l]) break; // Bu?c 2
        swap(a[k], a[l]); // Bu?c 3
        for (int i=k+1, j=n-1; i<j; i++, j--) swap(a[i], a[j]); // Bu?c 4
    }
}

int main() {
    vector<int> a;
    for(int i= 1; i<=9; i++) a.push_back(i);
    permute(a, a.size());
    return 0;
}
