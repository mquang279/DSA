#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b){
    int tmp1 = abs(a.first - a.second);
    int tmp2 = abs(b.first - b.second);
    if (tmp1 == tmp2){
        if (a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }
    return tmp1 < tmp2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    while (n--){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}