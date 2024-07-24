#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    vector<pair<pair<int, int>, int>> v;
    while (t--){
        int x, y, z;
        cin >> x >> y >> z;
        v.push_back({{x, y}, z});
    }
    vector<int> res;
    for (auto it : v) res.push_back(it.first.first + it.first.second + it.second);
    for (int x : res) cout << x << " ";
    return 0;
}