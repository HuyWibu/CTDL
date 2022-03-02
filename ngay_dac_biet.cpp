#include <bits/stdc++.h>
using namespace std;

int a[12] = {0};
map<int, int> mp;

bool check(){
    if(a[5] == 0 || (a[3] == a[4] && a[3] == 0) || (a[3] == a[4] && a[3] == 1) || (a[3] == 1 && a[4] == 0) || (a[1] == a[2] && a[1] == 0) )
        return false;
    return true;
}

void kq(){
    if(check())
    {
        for(int i=1; i<=8; i++){
            if(i == 2 || i == 4)
                cout << mp[a[i]] << "/";
            else
                cout << mp[a[i]];
        }
        cout << endl;
    }
}

void BT(int i){
    for(int j=0; j<=1; j++){
        a[i] = j;
        if(i == 8){
            kq();
        }
        else
            BT(i + 1);
    }
}

int main(){
    mp[0] = 0;
    mp[1] = 2;
    BT(1);
    return 0;
}