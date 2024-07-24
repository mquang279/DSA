#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    multiset<pair<int, int>> se1;
    int min_val = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        se1.insert({a[i], i + 1});
        min_val = min(min_val, a[i]);
    }
    set<int> se2;
    int res[n];
    for (auto i = se1.begin(); i != se1.end(); i++){
        if (i->first == min_val) res[i->second - 1] = 0;
        else{
            auto it = se2.upper_bound(i->second);
            it--;
            res[i->second - 1] = *it;
        }
        se2.insert(i->second);
    }
    for (int i = 0; i < n; i++) cout << res[i] << " ";
    return 0;
}