#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int x, y, z, t;
    cin >> x >> y >> z >> t;
    cout << max(x, y) << endl;
    cout << min(z, t) << endl;
    cout << max({x, y, z}) << endl;
    cout << min({x, y, z, t}) << endl;
    return 0;
}