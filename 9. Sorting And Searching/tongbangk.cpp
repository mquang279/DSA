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
    sort(a, a + n);
    ll cnt = 0;
    for (int i = 0; i < n; i++){
        int tmp = k - a[i];
        auto it1 = lower_bound(a + i + 1, a + n, tmp);
        auto it2 = upper_bound(a + i + 1, a + n, tmp);
        if (it2 != a){
            cnt += (it2 - a) - (it1 - a);
        }
    }
    cout << cnt;
    return 0;
}