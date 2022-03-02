#include <bits/stdc++.h>
using namespace std;

int n, k, a[105];

void kq(){
    for(int i = 1; i <= k; i++){
        cout << (char)(a[i] + 64);
    }
    cout << endl;
}

void BT(int i){
    for(int j = a[i - 1]; j <= n; j++){
        a[i] = j;
        if(i == k){
            kq();
        }
        else{
            BT(i + 1);
        }
    }
}

void Solve(){
    char x; cin >> x;
    cin >> k;
    n = (int)x - 64;
    a[0] = 1;
    BT(1);
}

int main(){
    Solve();
    return 0;
}