#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    // 4 0 0 0 4 0 0 0 4 0 0 0 4 
    string n;
    cin >> n;
    ll res = 0;
    for (char x : n){
        res = res * 10 + (x - '0');
        res %= 4;
    }
    if (res == 0) cout << 4;
    else cout << 0;
    return 0;
}