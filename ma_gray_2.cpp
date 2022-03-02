#include <bits/stdc++.h>
using namespace std;

int n, x[10005], check, cnt_a, cnt_b, cnt_c;
string a[10005], b[10005], c[10005];

void ktao_gray()
{
    cnt_a = 0; cnt_b = 0;
    for(int i=0 ; i<cnt_c ; i++)
    {
        a[cnt_a++] = c[i];
    }
    for(int i=cnt_c - 1 ; i>=0 ; i--)
    {
        b[cnt_b++] = c[i];
    }
}

void sinh_gray()
{
    for(int i=0 ; i<cnt_a ; i++)
    {
        a[i] = "0" + a[i];
    }
    for(int i=0 ; i<cnt_b ; i++)
    {
        b[i] = "1" + b[i];
    }
    cnt_c = 0;
    for(int i=0 ; i<cnt_a ; i++)
    {
        c[cnt_c++] = a[i];
    }
    for(int i=0 ; i<cnt_b ; i++)
    {
        c[cnt_c++] = b[i];
    }
}

void ktao()
{
    for(int i=1; i<=n ; i++)
        x[i] = 0;
}

void sinh()
{
    int i = n;
    while(x[i] == 1 && i>=1)
    {
        x[i] = 0;
        i--;
    }
    if(i==0)
    {
        check = 0;
    }
    else
    {
        x[i] = 1;
    }
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        n = s.size();
        cnt_c = 2;
        c[0] = "0"; c[1] = "1";
        int cnt = 1;
        while(cnt < n)
        {
            ktao_gray();
            sinh_gray();
            cnt++;
        }
        int dem = 0;
        for(int i=0 ; i<cnt_c ; i++)
        {
            if(c[i] == s)
                break;
            dem++;
        }
        check = 1;
        int count = 0;
        ktao();
        while(check)
        {
            if(count == dem)
            {
                for(int i=1; i<=n ; i++)
                    cout << x[i];
                cout << endl;
                break;
            }
            else
            {
                count++;
            }
            sinh();
        }
    }
    return 0;
}