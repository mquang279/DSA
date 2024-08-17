#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    ll a[n], diff[n + 1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i == 0) diff[i] = a[i];
        else diff[i] = a[i] - a[i - 1];
    }
    vector<vector<int>> v;
    for (int i = 0; i < m; i++){
        int l, r, d;
        cin >> l >> r >> d;
        l--; r--;
        vector<int> tmp = {l, r, d};
        v.push_back(tmp);
    }
    ll diff2[m + 1] = {0};
    for (int i = 0; i < k; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        diff2[a]++;
        diff2[b + 1]--;
    }
    for (int i = 1; i < m; i++){
        diff2[i] += diff2[i - 1];
    }
    for (int i = 0; i < m; i++){
        int tmp = v[i][2] * diff2[i];
        diff[v[i][0]] += tmp;
        diff[v[i][1] + 1] -= tmp;
    }
    for (int i = 1; i < n; i++){
        diff[i] += diff[i - 1];
    }
    for (int i = 0; i < n; i++){
        cout << diff[i] << " ";
    }
    return 0;
}