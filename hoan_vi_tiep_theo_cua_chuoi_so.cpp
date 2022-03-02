#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    scanf("\n");
    for(int k = 1; k<=t ; k++)
    {
        
        string tmp;
        getline(cin, tmp);
        stringstream ss(tmp);
        string s;
        while(ss >> s){}
        int i = s.size() - 2;
        cout << k << " ";
        while(s[i] >= s[i+1] && i>=0)
        {
            i--;
        }
        if(i<0)
        {
            cout << "BIGGEST" << endl;
        }
        else
        {
            int j = s.size() - 1;
            while(s[i] >= s[j])
            {
                j--;
            }
            swap(s[i], s[j]);
            sort(s.begin() + i + 1, s.end());
            cout << s << endl;
        }
    }
    return 0;
}