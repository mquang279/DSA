#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll a, x, y;
    cin >> a >> x >> y;
    ll tmp = gcd(x, y);
    for (int i = 0; i < tmp; i++){
        cout << a;
    }
    return 0;
}