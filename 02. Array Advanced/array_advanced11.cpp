/*  [Mảng 1 Chiều Nâng Cao]. Bài 11. Tìm hợp và giao 2
    Cho 2 mảng số nguyên a và b gồm n và m phần tử, các phần tử trong mảng là đôi một khác nhau, các phần tử trong
    2 mảng đã được sắp xếp theo thứ tự tăng dần. Hãy tìm mảng giao và mảng hợp của 2 mảng.
    Độ phức tạp mong muốn: O(n + m)
    
    Đầu vào
    -Dòng đầu tiên là số lượng phần tử của 2 dãy n và m.
    -Dòng thứ 2 là n phần tử trong dãy số 1.
    -Dòng thứ 3 là m phần tử trong dãy thứ 2.
    Đầu ra
    -Dòng đầu tiên in ra mảng hợp của 2 mảng
    -Dòng thứ 2 in ra mảng giao của 2 mảng

    Giới hạn
    1≤n,m≤10^7
    -10^7≤ai≤10^7

    Ví dụ :
    Input 01
    4 5
    1 2 3 4
    2 3 5 6 7
    Output 01
    1 2 3 4 5 6 7
    2 3
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
    vector<int> v;
    while (i < n && j < m){
        if (a[i] == b[j]){
            v.push_back(a[i]);
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j]){
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
    cout << endl;
    for (int x : v) cout << x << " ";
    return 0;
}