/*
[Quay Lui - Nhánh Cận]. Bài 13. Số xa cách
Cho số nguyên dương N . Một số nguyên dương K có N chữ số được gọi là số xa cách nếu thỏa mãn:
K không chứa chữ số 0.
Tất cả các chữ số từ 1 đến N đều xuất hiện trong K đúng 1 lần.
Không có hai chữ số liên tiếp nào trong K có hiệu bằng 1.

Đầu vào:
1 dòng duy nhất chứa số nguyên dương N
Đầu ra:
-In ra các số thỏa mãn theo thứ tự tăng dần

Giới hạn:
3<=N<=9

Input 01
4
Output 01
2413
3142
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
string s;
int visited[10];

bool check(string s){
    unordered_set<char> se;
    for (int i = 0; i < s.length(); i++){
        se.insert(s[i]);
        if (i >= 1 && abs(s[i] - s[i - 1]) == 1) return false;
    }
    return se.size() == s.length();
}

void Try(int i){
    if (check(s)) cout << s << endl;
    for (int j = 1; j <= n; j++){
        if (!visited[j]){
            s[i] = j + '0';
            visited[j] = 1;
            Try(i + 1);
            visited[j] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++){
        s += to_string(i);
    }
    Try(0);
    return 0;
}