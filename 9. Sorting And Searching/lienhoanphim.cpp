#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.second == b.second) return a.first > b.first;
    return a.second < b.second;
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
    int cnt = 1, curr_end = v[0].second;
    for (int i = 1; i < v.size(); i++){
        if (v[i].first >= curr_end){
            cnt++;
            curr_end = v[i].second;
        }
    }
    cout << cnt;
    return 0;
}