#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back({tmp, i});
    }
    sort(v.begin(), v.end());
    ll cnt = 1;
    for (int i = 1; i < n; i++){
        if (v[i].second < v[i - 1].second) cnt++;
    }
    cout << cnt;
    return 0;
}