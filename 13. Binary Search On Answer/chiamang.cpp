#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(int a[], int n, ll mid, int k){
    int cnt = 1;
    ll sum = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > mid) return false;
        sum += 1ll * a[i];
        if (sum > mid){
            cnt++;
            sum = a[i];
        }
    }
    return cnt <= k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    ll l = 0, r = 0;
    for (int &x : a){
        cin >> x;
        r += 1ll * x;
    }
    ll res = 0;
    while (l <= r){
        ll mid = (l + r) / 2;
        if (check(a, n, mid, k)){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << res;
    return 0;
}