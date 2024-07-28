#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll chiaDu(string s, ll m){
    ll res = 0;
    for (char x : s){
        res = res * 10 + (x - '0');
        res %= m;
    }
    return res;
}

ll ucln(string s, ll a){
    ll b = chiaDu(s, a);
    while (b != 0){
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    ll m;
    cin >> s >> m;
    cout << ucln(s, m);
    return 0;
}
