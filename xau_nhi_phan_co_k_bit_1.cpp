#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], check;

void ktao()
{
    for(int i=1 ; i<=n ; i++)
        a[i] = 0;
}

void sinh()
{
    int i = n;
    while(a[i] == 1 && i>=1)
    {
        a[i] = 0;
        i--;
    }
    if(i==0)
    {
        check = 0;
    }
    else
    {
        a[i] = 1;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        ktao();
        check = 1;
        while(check)
        {
            int cnt = 0;
            for(int i=1 ; i<=n ; i++)
            {
                if(a[i] == 1)
                    cnt++;
            }
            if(cnt == k)
            {
                for(int i=1 ; i<=n ; i++)
                {
                    cout << a[i];
                }
                cout << endl;
            }
            sinh();
        }
    }
    return 0;
}