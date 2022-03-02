#include <bits/stdc++.h>
using namespace std;

string a[10005], b[10005], c[10005];
int cnt_a, cnt_b, cnt_c;
int n;


void ktao()
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

void sinh()
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
    for(int i = 0; i<cnt_b ; i++)
    {
        c[cnt_c++] = b[i];
    }
}

int main()
{
    int t; cin >> t;
    scanf("\n");
    while(t--)
    {
        string s; cin >> s;
        cnt_c = 2;
        c[0] = "0"; c[1] = "1";
        n = s.size();
        int cnt = 1;
        while(cnt < n)
        {
            ktao();
            sinh();
            cnt++;
        }
        int dem = 0, sum = 0;
        for(int i=s.size() - 1; i>=0; i--)
        {
            if(s[i] == '1')
            {
                sum += pow(2, dem);
            }
            dem ++;
        }
        dem = 0;
        for(int i=0 ; i<cnt_c ; i++)
        {
            if(i == sum)
            {
                cout << c[i] << endl;
                break;
            }
            dem++;
        }
    }
    return 0;
}

