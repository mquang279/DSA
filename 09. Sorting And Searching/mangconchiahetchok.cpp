/*
Cho một mảng gồm n số nguyên, nhiệm vụ của bạn là đếm số mảng con 
( dãy con các phần tử liên tiếp) mà tổng các giá trị chia hết cho n.
Giới hạn
1≤n≤2⋅10^5;
-10^9≤ai≤10^9
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n, tmp;
    cin >> n;
    map<ll, ll> mp;
    ll sum = 0, cnt = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        sum = (sum % n + tmp % n) % n;
        if (sum < 0) sum += n;
        cnt += mp[sum];
        mp[sum]++;
    }
    cout << cnt;
    return 0;
}