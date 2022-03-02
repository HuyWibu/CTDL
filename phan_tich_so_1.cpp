#include <bits/stdc++.h>
using namespace std;

int n, a[100005], check, cnt;

void ktao()
{
    cnt = 1;
    a[1] = n;
}

void sinh()
{
    int i = cnt;
    while(a[i] == 1 && i>=1)
    {
        i--;
    }
    if(i == 0)
    {
        check = 0;
    }
    else
    {
        a[i]--;
        int d = cnt - i + 1;
        int q = d / a[i];
        int r = d % a[i];
        cnt = i; // mo rong mang a[]
        if(q)
        {
            for(int j=1 ; j<=q ; j++)
            {
                cnt++;
                a[cnt] = a[i];
            }
        }
        if(r)
        {
            cnt++;
            a[cnt] = r;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        check = 1;
        ktao();
        while(check)
        {
            cout << "(";
            for(int i=1 ; i<=cnt ; i++)
            {
                if(i != cnt)
                {
                    cout << a[i] << " ";
                }
                else
                    cout << a[i];
            }
            cout << ")" << " ";
            sinh();
        }
        cout << endl;
    }
    return 0;
}