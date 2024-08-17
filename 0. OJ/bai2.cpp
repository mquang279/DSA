#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, y, z, t;
    cin >> x >> y >> z >> t;
    cout << y << "," << z << "," << x << "," << t << endl;
    cout << y + z + x + t << endl;
    cout << x - y + z * t;
    return 0;
}