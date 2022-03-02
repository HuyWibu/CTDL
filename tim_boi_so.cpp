#include <bits/stdc++.h>
using namespace std;

int n, k, check, ktra;
string s;

void ktao()
{   
    for(int i=0 ; i<n ; i++)
        s += "0";
}

void sinh()
{
    int i = n-1;
    while(s[i] == '9' && i>=0)
    {
        s[i] = '0';
        i--;
    }
    if(i < 0)
    {
        check = 0;
    }
    else
    {
        s[i] = '9';
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> k;
        ktra = 1;
        n = 2;
        while(ktra)
        {
            check = 1; s = "";
            ktao();
            while(check)
            {
                long long x = 0;
                for(int i=0 ; i<s.size() ; i++)
                {
                    x = x * 10 + (s[i] - '0');
                }
                if(x != 0)
                {
                    if(x % k == 0)
                    {
                        cout << x << endl;
                        ktra = 0;
                        break;
                    }
                }
                sinh();
            }
            n++;
        }
    }
    return 0;
}

// + Su dung thuat toan sinh de giai bai toan nay
// + Luu y voi nhung bai toan sinh nhi phan cho xau thi 
// phai bat dau duyet tu cuoi vs i = n -1 va ket thua tai i = 0
// + Them 1 bien ktra va bien n de tang dan so phan tu 0 va 9 den khi
// nao tim duoc ket qua thi dung. n chay tu 2 nha!!!!
// + Su dung for de chuyen doi tu xau s thanh long long. Note: phai long long vi so co the lon hon 9 cso

