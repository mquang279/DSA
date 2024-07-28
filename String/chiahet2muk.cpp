#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    int k;
    cin >> k;
    int cnt = 0;
    for (int i = 0; i < k; i++){
        if (s[s.length() - 1 - i] == '0') cnt++;
    }
    if (cnt == k) cout << "YES";
    else cout << "NO";
    return 0;
}