/*
28tech cho bạn 1 xâu ký tự S chỉ bao gồm các kí tự 2, 8 và t, 3 chữ cái đầu tiên trong từ 28Tech. 
Bạn hãy đếm xem trong xâu S có bao nhiêu xâu con liên tiếp mà số lượng chữ số 2, 8 và chữ cái t xuất hiện với cùng số lần.

Giới hạn
1<=len(S)<=10^6

Input : t28288t2
Output : 2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    int cnt_2 = 0, cnt_8 = 0, cnt_t = 0, res = 0;
    map<pair<int, int>, int> mp;
    mp[{0, 0}] = 1;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '2') cnt_2++;
        if (s[i] == '8') cnt_8++;
        if (s[i] == 't') cnt_t++;
        pair<int, int> tmp = {cnt_2 - cnt_t, cnt_2 - cnt_8};
        if (mp.find(tmp) != mp.end()){
            res += mp[tmp];
        }
        mp[tmp]++;
    }
    cout << res;
    return 0;
}