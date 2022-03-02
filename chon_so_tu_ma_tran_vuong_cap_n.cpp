#include <bits/stdc++.h>
using namespace std;
int n, k, c[105][105], x[105][105], a[100005], check, sum, cnt = 1;

void ktao()
{
    for(int i = 1; i <= n; i++)
        a[i] = i;
}

void sinh()
{
    int i = n - 1;
    while(a[i] > a[i+1] && i >= 1)
    {
        i--;
    }
    if(i == 0)
    {
        check = 0;
    }
    else
    {
        int j = n;
        while(a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while(l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}

int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
        }
    }
    check = 1;
    ktao();
    while(check)
    {
        sum = 0;
        for(int i = 1; i <= n; i++)
        {
            sum += c[i][a[i]];
        }
        if(sum == k)
        {
            for(int i = 1; i <= n; i++)
            {
                x[cnt][i] = a[i];
            }
            cnt++;
        }
        sinh();
    }
    cout << cnt - 1 << endl;
    for(int i = 1; i < cnt; i++)
    {
        for(int j = 1; j<= n; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}