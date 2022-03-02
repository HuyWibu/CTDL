#include<bits/stdc++.h>
using namespace std;

int n, a[100];
map<int, int> mp;
vector<string> ver;

bool first(){
    for(int i = 1; i <= n; i++){
        if(a[i])
            return 1;
    }
    return 0;
}

bool check(){
    int cnt = 0;
    if(first() == 0)
        return 0;
    
    for(int i = 1; i <= n; i++){
        if(a[i])
           cnt++;
    }
    if(cnt == 1)
        return 0;
    
    vector<int> v;
    for(int i = 1; i <= n; i++){
        if(a[i]){
            v.push_back(mp[i]);
        }
    }
    for(int i = 0; i < v.size() - 1; i++){
        if(v[i] > v[i + 1]){
            return 0;
        }
    }
    return 1;
}

void kq(){
    if(check()){
        string x = "";
        for(int i = 1; i <= n; i++){
            if(a[i]){
                x = x + to_string(mp[i]) + " ";
            }
        }
        x.pop_back();
        ver.push_back(x);
    }
}

void BT(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            kq();
        }
        else
            BT(i + 1);
    }
}

void Solve(){
    cnt_s = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        mp[i] = x;
    }
    BT(1);
    sort(ver.begin(), ver.end());
    for(int i = 0; i < ver.size(); i++)
        cout << ver[i] << endl;
}

int main(){
    Solve();
    return 0;
}
// 4
// 6 3 7 11