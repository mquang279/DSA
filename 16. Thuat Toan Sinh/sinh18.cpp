/*
[Thuật Toán Sinh]. Bài 18. Tìm bội số
Một số được coi là số đẹp nếu nó chỉ bao gồm 2 số là 8 và 0. Bạn được cấp một số nguyên dương X, 
nhiệm vụ của bạn là tìm bội dương nhỏ nhất của X thỏa mãn bội này là số đẹp.

Đầu vào:
-Dòng đầu tiên là số bộ test T.
-T dòng tiếp theo mỗi dòng là một số nguyên dương N.
Đầu ra:
-Mỗi test in kết quả trên 1 dòng

Giới hạn:
1<=T<=300
1<=N<=300

Input 01:
6
240
19
55
47
287
247
Output 01:
8880
88008
880
80088
8088808
8000000008
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<string> v;
string s = string(19, '0'); //19
bool isFinal = false;

void sinh(){
    int i = 18;
    while (i >= 0 && s[i] == '8'){
        s[i] = '0';
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    s[i] = '8';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (!isFinal){
        v.push_back(s);
        sinh();
    }
    while(t--){
        ll n;
        cin >> n;
        for (int i = 0; i < v.size(); i++){
            ll tmp = stoll(v[i]);
            if (tmp >= n && tmp % n == 0){
                cout << tmp << endl;
                break;
            }
        }
    }
    return 0;
}
