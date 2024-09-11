/*  [Mảng 1 Chiều Nâng Cao]. Bài 18. Đếm số lượng cặp số bằng nhau
    Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là đếm số lượng cặp số bằng nhau trong mảng.
    Gợi ý : Đếm tần suất của từng số trong mảng, với mỗi số tính tổ hợp chập 2 của số lần suất hiện thì ra số cặp
    
    Đầu vào
    Dòng đầu tiên là số nguyên N.
    Dòng tiếp theo gồm N số nguyên A[i]
    Giới hạn
    1 ≤ N ≤ 10^6
    1 ≤ A[i] ≤ 10^6
    Đầu ra
    In ra số lượng cặp số bằng nhau trong mảng, không xét đến thứ tự.
    
    Ví dụ :
    Input 01
    6
    2 2 1 3 2 3
    Output 01
    4
    Giải thích :
    Các cặp số bằng nhau theo chỉ số : (0, 1), (0, 4), (1, 4), (3, 5)
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    map<int, int> mp;
    ll res = 0;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        mp[tmp]++;
    }
    for (auto it : mp){
        res += 1ll * it.second * (it.second - 1) / 2;
    }
    cout << res;
    return 0;
}