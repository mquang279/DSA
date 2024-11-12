/*
[Ngăn Xếp]. Bài 4. Thêm dấu ngoặc
Cho một xâu kí tự chỉ bao gồm dấu đóng mở ngoặc tròn.

Hãy tìm số lượng dấu đóng mở ngoặc cần thêm tối thiểu để tạo thành một xâu cân bằng, 
bạn có thể thêm các kí tự đóng mở ngoặc vào bất kì vị trí nào của xâu.

Đầu vào:
-Xâu kí tự S trên 1 dòng
Đầu ra:
-In ra số lượng dấu ngoặc cần bổ sung để xâu cân bằng

Giới hạn
1<=len(S)<=10000

Ví dụ :
Input 01:
))))()
Output 01:
4
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    stack<char> openBracket;
    int cnt = 0;
    for (char x : s) {
        if (x == '(') openBracket.push(x);
        else {
            if (!openBracket.empty()) {
                openBracket.pop();
            } else {
                cnt++;
            }
        }
    }
    cnt += openBracket.size();
    cout << cnt;
    return 0;
}