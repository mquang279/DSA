#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++){
        vector<int> a;
        int tmp, m;
        cin >> m;
        for (int j = 0; j < m; j++){
            cin >> tmp;
            a.push_back(tmp);
        }
        v.push_back(a);
    }
    for (int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        cout << v[x - 1][y - 1] << endl;
    }
    return 0;
}