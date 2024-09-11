#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    ll x = sqrt(n);
    if (x * x == n) cout << "YES";
    else cout << "NO";
    return 0;
}