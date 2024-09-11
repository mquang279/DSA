#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


bool cmp1(pair<int, int> a, pair<int, int> b){
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

bool cmp2(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (int &x : a){
        cin >> x;
        mp[x]++;
    }
    vector<pair<int, int>> v(mp.begin(), mp.end());
    vector<pair<int, int>> v2;
    sort(v.begin(), v.end(), cmp1);
    for (auto x : v){
        for (int i = 0; i < x.second; i++) cout << x.first << " ";
    }
    cout << endl;
    for (int x : a){
        if (mp[x] != 0){
            v2.push_back({x, mp[x]});
            mp[x] = 0;
        }
    }
    stable_sort(v2.begin(), v2.end(), cmp2);
    for (auto x : v2){
        for (int i = 0; i < x.second; i++) cout << x.first << " ";
    }
    return 0;
}