#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isIncrease(ll s){
    int tmp = 10;
    while (s != 0){
        if (s % 10 > tmp) return false;
        tmp = s % 10;
        s /= 10;
    }
    return true;
}

bool cmp(pair<ll, ll> a, pair<ll, ll> b){
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll s;
    map<ll, ll> mp;
    while (cin >> s){
        if (isIncrease(s)){
            mp[s]++;
        }
    }  
    vector<pair<ll, ll>> v;
    for (auto it : mp){
        v.push_back({it.first, it.second});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}