#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;
        v.push_back({start, end});
    }
    sort(v.begin(), v.end(), cmp);
    ll res = v[0].first + v[0].second;
    for (int i = 1; i < n; i++){
        res = max(res, 1ll * v[i].first);
        res += 1ll * v[i].second;
    }
    cout << res;
    return 0;
}