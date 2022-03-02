#include <bits/stdc++.h>
using namespace std;

int n, k, s, a[100], b[100005], check, sum, cnt;

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

int main()
{
    a[1] = 1;
    while (a[1] != 0 || a[2] != 0 || a[3] != 0)
    {
        cnt = 0;
        for (int i = 1; i <= 3; i++)
        {
            cin >> a[i];
        }
        n = a[1]; k = a[2]; s = a[3];
        if(n < k)
        {
            cout << 0 << endl;
            continue;
        }
        check = 1;
        ktao();
        while(check)
        {
            sum = 0; 
            for(int i = 1; i <= k; i++)
            {
                sum += b[i];
            }
            if(sum == s)
            {
                cnt++;
            }
            sinh();
        }
        if(a[1] != 0 || a[2] != 0 || a[3] != 0)
            cout << cnt << endl;
    }
    return 0;
}
