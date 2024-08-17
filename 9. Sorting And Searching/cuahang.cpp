#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;
        v.push_back({start, 1});
        v.push_back({end, -1});
    }
    sort(v.begin(), v.end());
    int res = 0, tmp = 0;
    for (auto i : v){
        tmp += i.second;
        res = max(res, tmp);
    }
    cout << res;
    return 0;
}