/*
[Ngăn Xếp]. Bài 2. Thao tác cơ bản với ngăn xếp 2
Yêu cầu bạn xây dựng một stack với các truy vấn sau đây:
push x : Thêm phần tử x vào stack.
top : In ra phần tử đầu tiên của stack.
Nếu stack rỗng, in ra NONE .
pop : Xóa phần tử đầu tiên của stack. Nếu stack rỗng, không làm gì cả.

Đầu vào:
-Dòng đầu tiên là số lượng truy vấn T. Mỗi truy vấn có dạng như trên.
-T dòng tiếp theo mô tả truy vấn
Đầu ra:
-Với mỗi truy vấn top, hãy in ra phần tử đầu tiên của stack. Nếu stack rỗng, in ra NONE

Ví dụ :
Input 01:
8
push 815
push 30
top
push 242
push 502
top
push 876
top
Output 01:
30
502
876
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    stack<int> st;
    while (t--) {
        string command;
        cin >> command;
        if (command == "push") {
            int val;
            cin >> val;
            st.push(val);
        } else if (command == "top") {
            if (st.empty()) cout << "NONE" << endl;
            else cout << st.top() << endl;
        } else if (command == "pop" && !st.empty()) {
            st.pop();
        }
    }
    return 0;
}