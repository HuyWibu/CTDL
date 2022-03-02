#include <iostream>
using namespace std;
int a[100001];
int x[100001];
int n;
int temp;
long s;
bool ok = 0;
int Try(int i)
{
   for (int j = 0; j <= 1; j++)
   {
      a[i] = j;
      temp += a[i] * x[i];
      if (temp == s / 2 && s % 2 == 0)
      {
         ok = 1;
         return 0;
      }
      if (temp <= s / 2)
         Try(i + 1);
      temp -= a[i] * x[i];
   }
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      temp = 0;
      s = 0;
      ok = 0;
      cin >> n;
      for (int i = 1; i <= n; i++)
      {
         cin >> x[i];
         s += x[i];
      }
      if (s % 2 == 1)
         cout << "NO" << endl;
      else
      {
         Try(1);
         if (ok == 1)
            cout << "YES" << endl;
         else
            cout << "NO" << endl;
      }
   }
}