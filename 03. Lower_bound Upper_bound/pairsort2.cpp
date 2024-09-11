#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
    if (a.first.first == b.first.first){
        if (a.first.second == b.first.second) return a.second < b.second;
        return a.first.second < b.first.second;
    }
    return a.first.first < b.first.first;
}

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
    sort(v.begin(), v.end(), cmp);
    for (auto i : v){
        cout << i.first.first << " " << i.first.second << " " << i.second << endl;
    }
    return 0;
}