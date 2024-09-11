/*  [Mảng 1 Chiều Nâng Cao]. Bài 24. Vị trí đầu tiên và cuối cùng
    Cho dãy số A[] gồm có N phần tử và số nguyên X, hãy in ra vị trí xuất hiện đầu tiên và vị trí xuất hiện cuối
    cùng của X trong mảng, trong trường hợp X không xuất hiện trong mảng thi in ra 2 số -1.
    
    Đầu vào
    Dòng đầu tiên là số nguyên N và X.
    Dòng tiếp theo gồm N số nguyên A[i]
    Giới hạn
    1 ≤ N ≤ 10^6
    1 ≤ A[i], X ≤ 10^9
    Đầu ra
    In ra kết quả của bài toán.
    
    Ví dụ :
    Input 01
    10 5
    1 2 3 4 5 6 7 5 2 8
    Output 01
    5 8
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &i : a) cin >> i;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            cout << i + 1 << " ";
            break;
        }
        if (i == n - 1){
            cout << -1 << " " << -1;
            return 0;
        }
    }
    for (int i = n - 1; i >= 0; i--){
        if (a[i] == x){
            cout << i + 1 << " ";
            break;
        }
    }
    return 0;
}