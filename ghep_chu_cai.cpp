#include <bits/stdc++.h>
using namespace std;

int n, a[100], used[100];
map<int, char> mp;

bool check(){
    int i = 1;
    while(a[i] != 1 && a[i] != 5){
        i++;
    }
    if(i == n)
        return 1;
    if(i == 1){
        for(int i = 2; i <= n; i++){
            if((a[i] == 1 || a[i] == 5) && i != 2 && i != n){
                return 0;
            }
        }
        return 1;
    }
    if(a[i] == 1 && a[i + 1] != 5 && a[i - 1] != 5){
        return 0;
    }
    if(a[i] == 5 && a[i + 1] != 1 && a[i - 1] != 1){
        return 0;
    }
    return 1;
}

void kq(){
    if(check()){
        for(int i = 1; i <= n; i++){
            cout << mp[a[i]];
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
            else
                BT(i + 1);
            used[j] = 0;
        }
    }
}

void Solve(){
    char c; cin >> c;
    n = (int)c - 64;
    // cout << n << endl;
    mp[1] = 'A'; mp[2] = 'B'; mp[3] = 'C'; mp[4] = 'D';
    mp[5] = 'E'; mp[6] = 'F'; mp[7] = 'G'; mp[8] = 'H';
    BT(1);
}

int main(){
    Solve();
    return 0;
}
// 3 TH ve vi tri cua nguyen am la: dau, cuoi va giua