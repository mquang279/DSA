/*  [Mảng 1 Chiều Nâng Cao]. Bài 28. Product sum
    Cho mảng A[] gồm N phần tử. Nhiệm vụ của bạn là tìm giá trị lớn nhất của tổng bên dưới bằng cách sắp đặt lại các
    phần tử trong mảng. Kết quả của bài toán có thể rất lớn vì vậy bạn hãy đưa ra kết quả lấy dư với 10^9 + 7.
    max = Σ(i = 0, n - 1, a[i] * i);
    
    Đầu vào
    Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]
    Giới hạn
    1 ≤ N ≤ 10^5
    0 ≤ A[i] ≤ 10^7
    Đầu ra
    In ra kết quả của bài toán lấy dư với (10^9 + 7)
    
    Ví dụ :
    Input 01
    5
    5 3 2 4 1
    Output 01
    40
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    ll res = 0;
    for (int i = 0; i < n; i++){
        res = ((res % mod) + ((1ll * a[i] * i) % mod)) % mod;
    }
    cout << res;
    return 0;
}