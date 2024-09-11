/*  [Mảng 1 Chiều Nâng Cao]. Bài 29. Tổng nhỏ nhất
    Cho mảng A[] gồm các số từ 0 đến 9. Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số được tạo bởi các số trong
    mảng A[]. Tất cả các số trong mảng A[] đều được sử dụng để tạo nên hai số. Chú ý nếu bạn tạo thành các số có số
    0 đứng đầu thì bạn có thể loại bỏ các số 0 vô nghĩa đó.
    Gợi ý : Sort tăng dần rồi lọc cách chia đều 2 chữ số về 2 số
    
    Đầu vào
    Dòng đầu tiên là số nguyên N.
    Dòng tiếp theo gồm N số nguyên A[i]
    Giới hạn
    1 ≤ N ≤ 30
    0 ≤ A[i] ≤ 9
    Đầu ra
    In ra kết quả của bài toán trên 1 dòng.
    
    Ví dụ :
    Input 01
    6
    6 8 4 5 2 3
    Output 01
    604
    Giải thích : 246 + 358 = 604
    5
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    ll min_val = 0, max_val = 0;
    for (int i = 0; i < n; i += 2){
        min_val = min_val * 10 + a[i];
    }
    for (int i = 1; i < n; i += 2){
        max_val = max_val * 10 + a[i];
    }
    cout << min_val + max_val;
    return 0;
}