#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.second == b.second) return a.first < b.first;
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
    int curr_end = v[0].second, cnt = 1;
    for (int i = 1; i < n; i++){
        if (v[i].first > curr_end){
            curr_end = v[i].second;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}