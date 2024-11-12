#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    s = " " + s;
    bool dp[1002][1002] = {false};
    for (int i = 1; i < s.length(); i++){
        dp[i][i] = true;
    }
    int ans = 1;
    for (int len = 2; len < s.length(); len++){
        for (int i = 1; i < s.length(); i++){
            int j = i + len - 1;
            if (len == 2 && s[i] == s[j]){
                dp[i][j] = true;
            }
            else dp[i][j] = dp[i + 1][j - 1] && (s[i] == s[j]);
            if (dp[i][j]) ans = max(ans, len);
        }
    }
    cout << ans;
    return 0;
}