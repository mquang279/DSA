/*
[Tham Lam]. Bài 1. Đổi tiền tham lam
Tại ngân hàng có các tờ tiền có mệnh giá lần lượt là 
1, 2, 5, 10, 20, 50, 100, 200, 500, 1000. 
Bạn cần tìm ra số tờ tiền ít nhất để có thể có được lượng tiền cho trước là N

Đầu vào:
-Dòng duy nhất chứa số nguyên N
Đầu ra:
-In ra số tờ tiền ít nhất tìm được

Giới hạn
0<=N<=10^9

Ví dụ :
Input 01
1250
Output 01
3

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int money[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    ll cnt = 0;
    for (int i = 9; i >= 0; i--){
        if (n >= money[i]){
            cnt += n / money[i];
            n %= money[i];
            if (n == 0) break;
        }
    }
    cout << cnt;
    return 0;
}