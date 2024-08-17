#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, s;
    cin >> n >> s;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        int power, gain;
        cin >> power >> gain;
        v.push_back({power, gain});
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++){
        if (s > v[i].first){
            s += v[i].second;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}