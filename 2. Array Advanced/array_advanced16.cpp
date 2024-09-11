/*  [Mảng 1 Chiều Nâng Cao]. Bài 16. Định lý Pytago
    Theo định lý Pytago, ta đã biết một bộ 3 số (a, b, c) thỏa mãn a^2 + b^2 = c^2 thì đó là ba cạnh của một tam
    giác vuông. Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số thỏa mãn là
    ba cạnh của tam giác vuông hay không.
    Gợi ý : Bình phương mọi số trong mảng A[] lên bài toán trở thành tìm bộ 3 a = b + c. Sort => áp dụng tương tự
    bài two sum

    Đầu vào
    Dòng đầu tiên là số nguyên N
    Dòng tiếp theo gồm N số nguyên A[i]
    Giới hạn
    1 ≤ N ≤ 5000
    1 ≤ A[i] ≤ 10^9
    Đầu ra
    In YES nếu trong mảng tồn tại 3 cặp thỏa mãn bộ 3 Pytago, ngược lại in NO.
    
    Ví dụ :
    Input 01
    3
    3 4 5
    Output 01
    YES
*/


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    ll a[n];
    unordered_map<ll, int> mp;
    for (ll &x : a){
        cin >> x;
        x = x * x;
        mp[x]++;
    }
    sort(a, a + n, __greater());
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (mp.find(a[i] - a[j]) != mp.end()){
                if ((a[i] - a[j] != a[j]) || (a[i] - a[j] == a[j] && mp[a[j]] >= 2)){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}