#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int tmp;
    multiset<int> prices;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        prices.insert(tmp);
    }
    for (int i = 0; i < m; i++){
        cin >> tmp;
        auto it = prices.upper_bound(tmp);
        if (it != prices.begin()){
            it--;
            cout << *it << endl;
            prices.erase(it);
        }
        else cout << -1 << endl;
    }
    return 0;
}