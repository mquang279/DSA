/*
[Ngăn Xếp]. Bài 17. Next greater element
Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn làm tìm phần tử đầu tiên bên phải lớn hơn 
của mọi phần tử A[i] trong mảng, nếu phần tử nào không có phần tử bên phải lớn hơn thì in ra -1.

Đầu vào:
-Dòng đầu tiên chứa N : Số lượng phần tử trong mảng.
-Dòng thứ 2 chứa N số nguyên, mỗi số cách nhau một khoảng trắng.
Đầu ra:
-In ra đáp án của bài toán trên 1 dòng.

Giới hạn
1<=N<=10^6
1<=A[i]<=10^6

Ví dụ :
Input 01:
8
19 11 11 15 13 18 19 18
Output 01:
-1 15 15 18 18 19 -1 -1
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
    int res[n];
    for (int i = 0; i < n; i++) {
        res[i] = -1;
    }
    for (int &x : a) cin >> x;
    stack<pair<int, int>> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[i] > st.top().first) {
            res[st.top().second] = a[i];
            st.pop();
        }
        st.push({a[i], i});
    }
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}