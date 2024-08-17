/*
28Tech rất thích số 28, anh ta cho bạn 1 xâu ký tự S gồm các kí tự là chữ số 2 và 8, 
bạn hãy giúp anh ấy tìm ra độ dài lớn nhất của xâu con liên tiếp của S mà chứa số lượng chữ số 2 và 8 bằng nhau.
Xâu S bao gồm các số 0 và 1, số 0 đại diện cho ký tự 2 và 1 đại diện cho ký tự 8

Giới hạn : 1<=len(S)<=10^6

Input : 111001010
Output : 8
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    unordered_map<int, int> mp;
    int cnt_0 = 0, cnt_1 = 0;
    mp[0] = -1;
    int res = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '0') cnt_0++;
        if (s[i] == '1') cnt_1++;
        if (mp.find(cnt_0 - cnt_1) != mp.end()){
            res = max(res, i - mp[cnt_0 - cnt_1]);
        }
        else mp[cnt_0 - cnt_1] = i;
    }
    cout << res;
    return 0;
}