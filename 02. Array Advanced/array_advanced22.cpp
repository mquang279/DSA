/*  [Mảng 1 Chiều Nâng Cao]. Bài 22. Số bị lặp lại đầu tiên
    Cho mảng các số nguyên. Tìm phần tử lặp đầu tiên trong mảng.

    Đầu vào
    Dòng đầu tiên là số lượng phần tử trong mảng N. Dòng thứ 2 là các phần tử ai trong mảng .
    Giới hạn
    1≤n≤1000000
    0≤ai≤10^6
    Đầu ra
    In ra số bị lặp đầu tiên trong mảng, nếu không có số nào bị lặp in ra -1.
    
    Ví dụ :
    Input 01
    5
    1 2 2 3 1
    Output 01
    2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int cnt[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    for (int x : a){
        cnt[x]++;
        if (cnt[x] == 2){
            cout << x;
            return 0;
        }
    }
    cout << -1;
    return 0;
}