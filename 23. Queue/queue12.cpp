/*
[Hàng Đợi]. Bài 12. Minimum operation
Cho hai số nguyên dương S và T và hai thao tác 1 và 2 dưới đây:
Thao tác 1 : Trừ S đi 1 (S = S - 1)
Thao tác 2 : Nhân S với 2 (S = S * 2)
Hãy dịch chuyển S thành T sao cho số lần thực hiện các thao tác 1, 2 là ít nhất.
Ví dụ với S = 2, T = 5 thì số các bước ít nhất để dịch chuyển S thành T thông qua 4 thao tác sau: 
Thao tác 1 : 2 * 2 = 4; Thao tác 2: 4-1 = 3; Thao tác 1: 3 * 2 = 6; Thao tác 2: 6-1 = 5;

Đầu vào:
-Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test
-T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một bộ đôi S và T.
Đầu ra:
-Đưa ra kết quả mỗi test theo từng dòng.

Giới hạn:
T≤100
1<=S,T<10000
Xâu S chỉ bao gồm các kí tự in hoa hoặc in thường.

Input 01:
6
17 16
16 10
13 17
13 10
17 17
16 19
Output 01:
1
6
6
3
0
8
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int solve(int s, int t) {
    queue<pair<int, int>> q;
    //first: trang thai so, second: so thao tac
    q.push({s, 0});
    set<int> se;
    while (!q.empty()) {
        pair<int, int> tmp = q.front();
        q.pop();
        if (tmp.first == t) return tmp.second;
        if (se.count(tmp.first - 1) == 0 && tmp.first - 1 > 0) {
            q.push({tmp.first - 1, tmp.second + 1});
            se.insert(tmp.first - 1);
        }
        if (se.count(tmp.first * 2) == 0 && tmp.first < t) {
            q.push({tmp.first * 2, tmp.second + 1});
            se.insert(tmp.first * 2);
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int s, t;
        cin >> s >> t;
        cout << solve(s, t) << endl;
    }
    return 0;
}