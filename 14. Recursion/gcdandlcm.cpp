#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll ucln(ll a, ll b){
    if (b == 0) return a;
    return ucln(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll a, b;
    cin >> a >> b;
    cout << ucln(a, b) << " " << a / ucln(a, b) * b;
    return 0;
}