#include<bits/stdc++.h>
using namespace std;

int n, a[101] = {0}, cot[101], d1[101], d2[101];
int cnt;

void BT(int i){
    for(int j=1; j<=n; j++){
        if(cot[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0){
            a[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            if(i == n){
                cnt++;
            }
            else
                BT(i + 1);
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
        }
    }
}

void Solve(){
    cin >> n;
    cnt = 0;
    memset(a, 0, sizeof(a));
    for(int i=1; i<=100; i++){
        cot[i] = d1[i] = d2[i] = 0;
    }
    BT(1);
    cout << cnt << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}