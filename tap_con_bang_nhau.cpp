#include <bits/stdc++.h>
using namespace std;

int n, a[100], b[100], check, sum, S, ok;

void sinh(int k){
    int i = k;
    while(b[i] == n - k + i && i > 0){
        i--;
    }
    if(i == 0){
        check = 1;
    }
    else{
        b[i] += 1;
        for(int j = i + 1; j <= k; j++){
            b[j] = b[j - 1] + 1;
        }
    }
}

void Solve(){
    cin >> n;
    S = 0; 
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        S += a[i];
    }
    if(S % 2 != 0){
        cout << "NO" << endl;
        return;
    }
    for(int i = 1; i <= n; i++){
        check = 0;
        for(int j = 1; j <= i; j++){
            b[j] = j;
        }
        while(check == 0){
            sum = 0;
            for(int j = 1; j <= i; j++){
                sum += a[b[j]];
            }
            if(sum == (S - sum)){
                cout << "YES" << endl;
                ok = 1;
                return;
            }
            sinh(i);
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}