/*
[Mảng 1 Chiều Nâng Cao]. Bài 8. Trộn 2 dãy đã sắp xếp
Cho 2 mảng đã được sắp xếp tăng dần, thực hiện trộn 2 dãy trên thành một dãy được sắp xếp.

Đầu vào:
-Dòng đầu tiên là số lượng phần tử của 2 dãy n và m
-Dòng thứ 2 là n phần tử trong dãy số 1.
-Dòng thứ 3 là m phần tử trong dãy thứ 2.
Đầu ra:
-In ra mảng sau khi trộn.

Giới hạn:
1≤n,m≤10^7
1≤ai≤10^9

Input 01:
3 4
1 3 8
2 2 3 7
Output 01:
1 2 2 3 3 7 8
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    int i = 0, j = 0;
    while (i < n && j < m){
        if (a[i] < b[j]){
            cout << a[i] << " ";
            i++;
        }
        else{
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < n){
        cout << a[i] << " ";
        i++;
    }
    while (j < m){
        cout << b[j] << " ";
        j++;
    }
    return 0;
}