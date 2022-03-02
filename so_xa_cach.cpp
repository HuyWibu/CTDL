#include <bits/stdc++.h>
using namespace std;

int n, a[105], used[105];

int check(){
    for(int i = 1; i < n; i++){
        if(abs(a[i + 1] - a[i]) == 1){
            return 0;
        }
    }
    return 1;
}

void kq(){
    if(check()){
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
    }
}

void BT(int i){
    for(int j = 1; j <= n; j++){
        if(used[j] == 0){
            a[i] = j;
            used[j] = 1;
            if(i == n){
                kq();
            }
            else{
                BT(i + 1);
            }
            used[j] = 0;
        }
    }
}

void Solve(){
    cin >> n;
    memset(a, 0, sizeof(a));
    memset(used, 0, sizeof(used));
    BT(1);
}

int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}