#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(pair<ll, ll> a, pair<ll, ll> b){
    return a.first * a.second < b.first * b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++){
        ll height, width;
        cin >> height >> width;
        v.push_back({height, width});
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}
