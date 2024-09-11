#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll a, b;
    cin >> a >> b;
    a = ceil(sqrt(a));
    b = sqrt(b);
    cout << b - a + 1;
    return 0;
}