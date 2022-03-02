#include <bits/stdc++.h>
using namespace std;

int n, k, a[105], b[100005], c[100], check, cnt_c, cnt = 0;

void ktao()
{
    for(int i = 1; i <= k; i++)
    {
        b[i] = i;
    }
}

void sinh()
{
    int i = k;
    while(b[i] == n - k + i && i >= 1)
    {
        i--;
    }
    if(i == 0)
    {
        check = 0;
    }
    else
    {
        int x = ++ b[i];
        for(int j = i; j <= k; j++)
        {
            b[j] = x++;
        }
    }
}

bool ktra()
{
    for(int i = 1; i < k; i++)
    {
        for(int j = i + 1; j <= k; j++)
        {
            if(c[i] > c[j])
                return 0;
        }
    }
    return 1;
}

int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    check = 1; cnt_c = k;
    ktao();
    while(check)
    {
        for(int i = 1; i <= k; i++)
        {
            c[i] = a[b[i]];
        }
        if(ktra())
        {
            cnt++;
        }
        sinh();
    }
    cout << cnt << endl;
    return 0;
}