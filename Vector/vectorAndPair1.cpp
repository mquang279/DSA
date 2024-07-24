#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    vector<pair<int, int>> v;
    while (t--){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    vector<double> res;
    for (auto it : v){
        res.push_back(sqrt(pow(it.first, 2) + pow(it.second, 2)));
    }
    for (double x : res) cout << fixed << setprecision(2) << x << " ";
    return 0;
}