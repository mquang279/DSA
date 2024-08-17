/*
Cho một mảng gồm n số nguyên dương, nhiệm vụ của bạn là đếm số mảng con (dãy con các phần tử liên tiếp) có tổng bằng x.
Giới hạn
1≤n≤2⋅10^5
1≤x,ai≤10^9
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
    ll prefix[n];
    int cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i == 0) prefix[i] = a[i];
        else prefix[i] = prefix[i - 1] + a[i];
        if (prefix[i] == x) cnt++;
    }
    for (int i = 0; i < n; i++){
        auto it = lower_bound(prefix, prefix + n, prefix[i] + x);
        if (it != prefix + n && *it == prefix[i] + x) cnt++;
    }
    cout << cnt;
    return 0;
}