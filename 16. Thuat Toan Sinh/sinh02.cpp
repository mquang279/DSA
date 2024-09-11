/*
    [Thuật Toán Sinh]. Bài 2. Tập con kế tiếp
    Cho tập gồm N số nguyên từ 1 tới N và số nguyên K, nhiệm vụ của bạn là hãy in ra tập con kế tiếp của 
    tập con K phần tử hiện tại theo thuật toán sinh kế tiếp. Nếu tập con hiện tại là tập con cuối cùng
    thì tập con kế tiếp của nó là tập con đầu tiên.

    Đầu vào:
    -Dòng 1 là N và K
    -Dòng 2 gồm K số của tập con hiện tại
    Đầu ra:
    -In ra tập con kế tiếp

    Giới hạn:
    1<=K<=N<=10^4

    Input 01:
    5 3
    1 2 3
    Output 01:
    1 2 4
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[10001];
int n, k;

void sinh()
{
    int i = k - 1;
    while (i >= 0 && a[i] == n + i - k + 1)
    {
        i--;
    }
    if (i < 0)
    {
        for (int j = 0; j < k; j++)
        {
            a[j] = j + 1;
        }
        return;
    }
    a[i]++;
    for (int j = i + 1; j < k; j++)
    {
        a[j] = a[j - 1] + 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < k; i++)
        cin >> a[i];
    sinh();
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
    return 0;
}