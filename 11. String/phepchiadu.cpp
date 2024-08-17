#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    ll mod;
    cin >> s >> mod;
    ll res = 0;
    for (char x : s){
        res = res * 10 + (x - '0');
        res %= mod;
    }
    cout << res;
    return 0;
}