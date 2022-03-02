#include <bits/stdc++.h>
using namespace std;

// <Khoi tao>
// while(<chua gap cau hinh cuoi>)
// {
//     <In ra cau hinh hien tai>
//     <Sinh ra cau hinh ke tiep>
// }

int n, X, k, a[100005], b[100005], check, dem = 0;

void nhap()
{
    for(int i=1 ; i<=n ; i++)
    {
        cin >> a[i];
    }
}

void ktao()
{
    for(int i=1 ; i<=n ; i++)
        b[i] = 0;
}

void sinh()
{
    int i = n;
    while(i>=1 && b[i]==1)
    {
        b[i] = 0;
        i--;
    }
    if(i==0)
    {
        check = 0;
    }
    else
    {
        b[i] = 1;
    }
}

int main()
{
    cin >> n >> X;
    nhap();
    ktao();
    check = 1;
    while(check)
    {
        int sum = 0;
        for(int i=1 ; i<=n ; i++)
        {
            if(b[i])
            {
                sum += a[i];
            }
        }
        if(sum == X)
        {
            dem++;
            for(int i=1 ; i<=n ; i++)
            {
                if(b[i])
                    cout << a[i] << " ";
            }
            cout << endl;
        }
        sinh();
    }
    cout << dem << endl;
    return 0;
}