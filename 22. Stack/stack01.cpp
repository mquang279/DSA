/*
[Ngăn Xếp]. Bài 1. Thao tác cơ bản với ngăn xếp 1
Cho một ngăn xếp các số nguyên. Các thao tác gồm 3 lệnh: push, pop và show.
Trong đó thao tác push kèm theo một giá trị cần thêm .
Hãy viết chương trình ghi ra kết quả của các lệnh show. 
Trong trường hợp lệnh pop thì ngăn xếp rỗng sẽ không được thực hiện

Đầu vào:
-Dòng đầu là số thao tác T
-T dòng tiếp theo mỗi dòng chứa một lệnh push, pop hoặc show.
Đầu ra:
-Ghi ra màn hình các phần tử đang có trong stack 
theo thứ tự lưu trữ mỗi khi gặp lệnh show.
-Các số viết cách nhau đúng một khoảng trống. 
Nếu stack rỗng thì in ra EMPTY

Giới hạn
1<=T<=100

Ví dụ :
Input 01:
9
show
push 346
push 196
push 946
show
show
push 943
push 265
push 225
Output 01:
EMPTY
346 196 946 
346 196 946
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void printStack(stack<int> st) {
    vector<int> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    if (v.size() == 0) {
        cout << "EMPTY" << endl;
    } else {
        reverse(v.begin(), v.end());
        for (int x : v) cout << x << " ";
        cout << endl;
    }
}

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
        } else if (command == "show") {
            printStack(st);
        } else if (command == "pop" && !st.empty()) {
            st.pop();
        }
    }
    return 0;
}