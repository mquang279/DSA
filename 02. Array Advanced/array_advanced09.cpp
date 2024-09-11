/*
    [Mảng 1 Chiều Nâng Cao]. Bài 9. Đếm tần suất
    Cho mảng các số nguyên không âm gồm N phần tử, thực hiện đếm tần suất xuất hiện của các phần tử và in theo mẫu.

    Đầu vào:
    -Dòng đầu tiên là số lượng phần tử trong mảng.
    -Dòng thứ 2 là N phần tử trong mảng.
    Đầu ra:
    -In ra tần suất xuất hiện của các phần tử theo thứ tự từ nhỏ tới lớn sau đó bỏ trống 1 dòng và in ra tần suất 
    xuất hiện của các phần tử theo thứ tự xuất hiện trong mảng(mỗi giá trị chỉ liệt kê 1 lần).

    Giới hạn:
    2≤n≤10^6
    0≤ai≤10^7

    Input 01:
    8
    2 1 2 3 4 8 2 3
    Output 01:
    1 1
    2 3
    3 2
    4 1
    8 1

    2 3
    1 1
    3 2
    4 1
    8 1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int cnt[10000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
        cnt[x]++;
    }
    for (int i = 0; i <= 1e7; i++){
        if (cnt[i] != 0){
            cout << i << " " << cnt[i] << endl;
        }
    }
    cout << endl;
    for (int x : a){
        if (cnt[x] != 0){
            cout << x << " " << cnt[x] << endl;
            cnt[x] = 0;
        }
    }
    return 0;
}