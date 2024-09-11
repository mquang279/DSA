/*  [Mảng 1 Chiều Nâng Cao]. Bài 17. Truy vấn tổng trên đoạn
    Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là tính tổng các số trong dãy từ chỉ số l tới chỉ số r.
    Gợi ý : Áp dụng mảng cộng dồn

    Đầu vào
    Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i] và số Q là số cuối cùng ở dòng thứ 2.
    Q dòng tiếp theo mỗi dòng là 2 chỉ số l, r.
    Giới hạn
    1 ≤ N ≤ 10^6
    1 ≤ A[i] ≤ 10^9
    1 ≤ Q ≤ 1000
    1 ≤ l ≤ r ≤ N
    Đầu ra
    In ra tổng các phần tử trong đoạn [l, r] của từng truy vấn trên 1 dòng.
    
    Ví dụ :
    Input 01
    5
    1 2 3 4 5 
    1
    1 3
    Output 01
    6
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
    ll prefix[n + 1];
    prefix[0] = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        prefix[i + 1] = prefix[i] + a[i];
    }
    int t;
    cin >> t;
    while (t--){
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << " "; 
    }
    return 0;
}