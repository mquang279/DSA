#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s = "28tech";
    int n, pos = 0;
    cin >> n;
    char a;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (pos < s.size() && a == s[pos]) pos++;
    }
    if (pos >= s.size()) cout << "28TECH";
    else cout << "HCET82";
    return 0;
}