#include <bits/stdc++.h>
using namespace std;

int n, k, a[105], b[105], check;

void nhap()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    sort(b + 1, b + n + 1);
}

void kq()
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i])
        {
            sum += b[i];
        }
    }
    if(sum == k)
    {
        check = 0;
        int x = n;
        while(a[x] == 0)
            x--;
        cout << "[";
        for(int i = 1; i <= n; i++)
        {
            if(a[i])
            {
                if(i == x)
                    cout << b[i];
                else
                    cout << b[i] << " ";
            }
        }
        cout << "]" << " ";
    }
}

void Try(int i)
{
    for(int j = 1; j >= 0; j--)
    {
        a[i] = j;
        if(i == n)
            kq();
        else
            Try(i + 1);
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        check = 1;
        nhap();
        Try(1);
        if(check == 1)
            cout << -1;
        cout << endl;
    }
    return 0;
}