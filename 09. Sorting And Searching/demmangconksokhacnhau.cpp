/*
Cho một mảng n số nguyên, nhiệm vụ của bạn là tính số mảng con liên tiếp có nhiều nhất k giá trị khác nhau.

Giới hạn
1≤k≤n≤2⋅10^
1≤xi≤10^9
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    map<int, int> mp;
    int l = 0, r = 0, curr_size = 0;
    ll res = 0;
    while (r < n){
        mp[a[r]]++;
        if (mp[a[r]] == 1) curr_size++;
        while (curr_size > k && l < r){
            mp[a[l]]--;
            if (mp[a[l]] == 0) curr_size--;
            l++;
        }
        res += (r - l) + 1;
        r++;
    }
    cout << res;
    return 0;
}