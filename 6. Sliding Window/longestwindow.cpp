#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    int cnt[125] = {0};
    int left = 0, right = 0, max_length = 0;
    while (right < s.length()){
        cnt[s[right]]++;
        while (cnt[s[right]] >= 2){
            cnt[s[left]]--;
            left++;
        }
        max_length = max(max_length, right - left + 1);
        right++;
    }
    cout << max_length;
    return 0;
}