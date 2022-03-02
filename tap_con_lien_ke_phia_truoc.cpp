#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k, a[100005] = {0};
        cin >> n >> k;
        for(int i=1 ; i<=k ; i++)
            cin >> a[i];
        int i = k;
        while(a[i] == a[i-1] + 1 && i>1)
        {
            i--;
        }

        if(i == 1 && a[1] == 1)
        {
            for(int j=1 ; j<=k ; j++)
            {
                cout << n - k + j << " ";
            }
            cout << endl;
        }
        else
        {
            if(i == 1)
            {
                a[1]--;
                cout << a[1] << " ";
                for(int j=2 ; j<=k ; j++)
                {
                    cout << n - k + j << " ";
                }
                cout << endl;
            }
            else
            {
                a[i]--;
                int x = k;
                while(x > i)
                {
                    if(a[x] != n-k+x)
                    {
                        a[x]++;
                    }
                    x--;
                }
                for(int j=1 ; j<=k ; j++)
                    cout << a[j] << " ";
                cout << endl;
            }
        }
    }
    return 0;
}
// 123 124 125 134 135 145 234 235 245 345
// 1234 1235 1236 1245 1246 1256 1345 1346 1356 1456 2345 2346 2356 2456 3456 
// b1: duyet tu cuoi len de tim a[i] != a[i-1] + 1
// b2: neu nhu a[1] = 1 va i = 1 ---> truong hop cau hinh dau tien
// b3: neu khong thi co 2 truong hop:
//     + TH1: i = 1 nhung a[1] != 1. vi du 3 4 5 hoac 2 3 4
//     + TH2: i > 1. vi du 1 3 4 voi n = 5 va k = 3 thi a[i]-- va duyet tu cuoi len
//     neu co vi tri nao chua bang n - k + j (j chay tu 1 den k) thi +1 cho vi tri do