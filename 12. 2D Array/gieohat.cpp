#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, t;
    cin >> n >> m >> t;
    int minX = INT_MAX, minY = INT_MAX;
    while (t--){
        int x, y;
        cin >> x >> y;
        minX = min(minX, x);
        minY = min(minY, y);
    }
    cout << minX * minY << endl;
    return 0;
}