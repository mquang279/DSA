/*
[Hàng Đợi]. Bài 13. Minimum operation 2
Cho số tự nhiên N và hai phép biến đổi (a), (b) dưới đây.
Thao tác (a) : Trừ N đi 1 (N=N-1).
Ví dụ N=17, thao tác (a) biến đổi N = N-1 =16.
Thao tác (b) : N = max(u,v) nếu u * v =N (u>1, v>1).
Ví dụ N=16, thao tác (b) có thể biến đổi N = max(2, 8)=8 hoặc N=max(4, 4)=4.
Chỉ được phép sử dụng hai thao tác (a) hoặc (b), hãy biến đổi N thành 1 sao 
số các thao tác (a), (b) được thực hiện ít nhất.
Ví dụ với N=17, số các phép (a), (b) nhỏ nhất biến đổi N thành 1 là 4 bước như sau: 
- Thao tác (a): N = N-1 = 17-1 = 16. - Thao tác (b): 16 = max(4,4) = 4. 
- Thao tác (b): 4 = max(2,2) = 2. - Thao tác (a): 2 = 2-1 = 1.

Đầu vào:
-Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test
-T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số N
Đầu ra:
-Đưa ra kết quả mỗi test theo từng dòng.

Giới hạn
1<=T<=100
1<=N<10^9
Xâu S chỉ bao gồm các kí tự in hoa hoặc in thường.

Ví dụ :
Input 01:
7
896
99
841
880
227
870
291
Output 01:
5
6
6
5
7
5
6
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int minimumOperation(int n) {
    queue<pair<int, int>> q;
    q.push({n, 0});
    set<int> se;
    while (!q.empty()) {
        pair<int, int> tmp = q.front();
        q.pop();
        if (tmp.first == 1) return tmp.second;
        if (se.count(tmp.first - 1) == 0 && tmp.first - 1 >= 1) {
            q.push({tmp.first - 1, tmp.second + 1});
            se.insert(tmp.first - 1);
        }
        for (int i = 2; i <= sqrt(tmp.first); i++) {
            if (tmp.first % i == 0) {
                int val = max(tmp.first / i, i);
                if (se.count(val) == 0) {
                    q.push({val, tmp.second + 1});
                    se.insert(val);
                }
            }
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
        int n;
        cin >> n;
        cout << minimumOperation(n) << endl;
    }
    return 0;
}