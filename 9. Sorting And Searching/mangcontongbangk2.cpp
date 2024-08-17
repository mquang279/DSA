/*
Cho một mảng gồm n số nguyên, nhiệm vụ của bạn là đếm số mảng con (dãy con các phần tử liên tiếp) có tổng bằng x.
Giới hạn:
    1≤n≤2⋅10^5
    -10^9≤x, ai≤10^9
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    unordered_map<ll, int> mp;
    ll prefix[n], cnt = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i == 0) prefix[i] = 1ll * a[i];
        else prefix[i] = prefix[i - 1] + a[i];
        if (mp.find(prefix[i] - x) != mp.end()){
            cnt += mp[prefix[i] - x];
        }
        mp[prefix[i]]++;
    }
    cout << cnt;
    return 0;
}