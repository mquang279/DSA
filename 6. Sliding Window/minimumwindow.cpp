#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s, t;
    cin >> s >> t;
    int cntS[125] = {0};
    int cntT[125] = {0};
    int distNum = 0;
    for (char x : t){
        cntT[x]++;
        if (cntT[x] == 1) distNum++;
    }
    int left = 0, right = 0, min_length = INT_MAX, pos = 0, cnt = 0;
    while (right < s.length()){
        cntS[s[right]]++;
        if (cntS[s[right]] == cntT[s[right]]) cnt++;
        if (cnt == distNum){
            while ((cntS[s[left]] - 1) >= cntT[s[left]]){
                cntS[s[left]]--;
                left++;
            }
            if (right - left + 1 < min_length){
                min_length = right - left + 1;
                pos = left;
            }
        }
        right++;
    }
    if (min_length == INT_MAX) cout << -1 << endl;
    else{
        for (int i = pos; i < pos + min_length; i++) cout << s[i];
    }
    return 0;
}