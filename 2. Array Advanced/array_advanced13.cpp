/*  [Mảng 1 Chiều Nâng Cao]. Bài 13. Đổi tiền tham lam
    Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, số lượng tờ tiền mỗi mệnh giá là
    không hạn chế. Một người cần đổi số tiền có giá trị bằng N. Hãy xác định xem số tờ tiền ít nhất sau khi đổi là
    bao nhiêu?
    
    Đầu vào
    Gồm 1 số nguyên N
    Giới hạn
    1 ≤ N ≤ 10^14
    Đầu ra
    Số lượng tờ tiền ít nhất có tổng bằng N.
    
    Ví dụ :
    Input 01
    121
    Output 01
    3
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    vector<int> v({1, 2, 5, 10, 20, 50, 100, 200, 500, 1000});
    cin >> n;
    ll res = 0;
    for (int i = v.size() - 1; i >= 0; i--){
        if (v[i] <= n){
            res += n / v[i];
            n %= v[i];
        }
        if (n == 0) break;
    }
    cout << res;
    return 0;
}