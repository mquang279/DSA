#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isFinal = false;

void sinh(string& s){
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    s[i] = '1';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    string s = string(n, '0');
    ll minDiff = LLONG_MAX;
    while (!isFinal){
        ll weight1 = 0, weight2 = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == '0') weight1 += 1ll * a[i];
            else weight2 += 1ll * a[i];
        }
        minDiff = min(minDiff, abs(weight1 - weight2));
        sinh(s);
    }
    cout << minDiff;
    return 0;
}