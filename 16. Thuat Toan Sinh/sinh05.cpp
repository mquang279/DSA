/*
    [Thuật Toán Sinh]. Bài 5. Sinh tập con
    Cho N số nguyên tự nhiên từ 1 tới N, bạn hãy sinh ra các tập con 
    có K phần tử của tập N phần tử này theo thuật toán sinh kế tiếp.

    Đầu vào:
    -2 số nguyên dương N và K.
    Đầu ra: 
    -In ra mỗi tập con trên 1 dòng.

    Giới hạn:
    1<=K<=N<=20

    Input 01:
    5 2
    Output 01:
    12
    13
    14
    15
    23
    24
    25
    34
    35
    45
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;
int a[21];
bool check = true;

void sinh(){
    int i = k - 1;
    while (i >= 0 && a[i] == n - k + 1 + i){
        i--;
    }
    if (i < 0){
        check = false;
        return;
    }
    a[i]++;
    for (int j = i + 1; j < k; j++){
        a[j] = a[j - 1] + 1;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        a[i] = i + 1;
    }
    while (check){
        for (int i = 0; i < k; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}