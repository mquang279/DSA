#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll a, b;
    cin >> a >> b;
    ll ucln = __gcd(a, b);
    ll bcnn = (a / ucln) * b;
    cout << ucln << " " << bcnn;
    return 0;
}