#include <bits/stdc++.h>
using namespace std;

int n, k, b[10005], check, x = 0, cnt_c=0;
char a[10005]; 
int m = 0;// m de dem so xau thoa man

string c[10005], s;

void ktao()
{
    for (int i = 1; i <= n; i++)
        a[i] = 'A';
}

void sinh()
{
    int i = n;
    while (a[i] == 'B' && i >= 1)
    {
        a[i] = 'A';
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        a[i] = 'B';
    }
}

bool ktra1()
{
    int dem = 0;
    for(int i=0 ; i<=x ; i++)
    {
        if(b[i] == k)    
            dem++;  
    }
    if(dem == 1)
        return 1;
    return 0;
}

// bool cmp(string a, string b)
// {
//     return a < b;
// }

int main()
{
    cin >> n >> k;
    ktao();
    check = 1;
    while (check)
    {
        x = 0;
        s = "";
        int dem = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i + 1] && a[i] == 'A')
            {
                dem++;
                b[x] = dem;
            }
            else
            {
                dem = 1;
                if (a[i + 1] == a[i + 2] && a[i + 1] == 'A')
                {
                    x++;
                }
            }
        }
        if(ktra1())
        {
            for(int i=1 ; i<=n ; i++)
            {
                s += a[i];
            }
            c[cnt_c++] = s;
            m++;
        }
        b[0] = 0;
        // ko reset b nen khi ko tim thay 2 ki tu A lien tiep thi b[0] mac dinh bang 0;
        sinh();
    }
    cout << m << endl;
    for (int i = 0; i < cnt_c; i++)
    {
        cout << c[i] << endl;
    }
    return 0;
}