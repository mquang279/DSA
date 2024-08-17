#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n][m], min_val = INT_MAX, max_val = INT_MIN;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            min_val = min(a[i][j], min_val);
            max_val = max(a[i][j], max_val);
        }
    }
    vector<pair<int, int>> min_pos;
    vector<pair<int, int>> max_pos;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == min_val) min_pos.push_back({i + 1, j + 1});
            if (a[i][j] == max_val) max_pos.push_back({i + 1, j + 1});
        }
    }
    cout << min_val << endl;
    for (auto i : min_pos) cout << i.first << " " << i.second << endl;
    cout << max_val << endl;
    for (auto i : max_pos) cout << i.first << " " << i.second << endl;
    return 0;
}