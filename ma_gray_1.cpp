#include <bits/stdc++.h>
using namespace std;

string a[10005], b[10005], c[10005];
int cnt_a, cnt_b, cnt_c;
int n, cnt;

void ktao()
{
    // bat dau tu n = 1
    for (int i = 0; i < cnt_c; i++)
    {
        a[cnt_a] = c[i];
        cnt_a++;
    }
    for (int i=cnt_c - 1; i>=0 ; i--)
    {
        b[cnt_b++] = c[i];
    }
}

void sinh()
{
    for (int i = 0; i < cnt_a; i++)
    {
        a[i] = "0" + a[i];
    }
    for (int i = 0; i < cnt_b; i++)
    {
        b[i] = "1" + b[i];
    }
    cnt_c = 0;
    for (int i = 0; i < cnt_a; i++)
    {
        c[cnt_c++] = a[i];
    }
    for (int i = 0; i < cnt_b; i++)
    {
        c[cnt_c++] = b[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        c[0] = "0";
        c[1] = "1";
        cnt_c = 2;
        int cnt = 1;
        while (cnt < n)
        {
            cnt_a = 0; cnt_b = 0;
            ktao();
            sinh();
            cnt++;
        }
        for (int i = 0; i < cnt_c; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Mã gray có độ dài n thể thực hiện sinh ra từ mã gray có độ dài n - 1 thông qua các bước như sau :
// 1. Lưu L1[] là các mã gray độ dài n - 1.
// 2. Tạo L2[] là các mã gray được đạo ngược từ L1[]
// 3. Thêm 0 vào trước mỗi mã gray trong L1[], thêm 1 vào trước mỗi mã gray trong L2.
// 4. Nối L2 vào sau L1.Ví dụ với n = 3 ta thực hiện như sau :
//     -Xuất phát từ mã gray dộ dài 1 ta có L1 = {0, 1}.- Từ L1 ta xây dựng được L2 = {1, 0}
//     - Thêm 0 vào trước mỗi phần tử L1 ta được L1 = {00, 01}, thêm 1 vào trước mỗi phần tử L2 ta được L2 = {11, 10}
//     - Nối L2 vào sau L1 ta được L1 = {00, 01, 11, 10} Làm tương tự như trên từ các mã gray độ dài 2 ta được các mã gray độ dài 3 :
//     -Xuất phát từ mã gray ộ dài 2 ta có L1 = {00, 01, 11, 10}.
//     - Từ L1 ta xây dựng được L2 = {10, 11, 01, 00}
//     - Thêm 0 vào trước mỗi phần tử L1 ta được L1 = {000, 001, 011, 010}, thêm 1 vào trước mỗi phần tử L2 ta được L2 = {110, 111, 101, 100}
//     - Thêm L2 vào sau L1 ta được L1 = {000, 001, 011, 010, 110, 11...
