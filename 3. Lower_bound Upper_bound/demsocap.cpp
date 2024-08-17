#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll cnt = 0;
    for (int i = 0; i < n; i++){
        auto it1 = lower_bound(a + i + 1, a + n, a[i] + k);
        auto it2 = upper_bound(a + i + 1, a + n, a[i] + k);
        if (it2 != a){
            it2--;
            if (*it1 == a[i] + k){
                cnt += (it2 - a) - (it1 - a) + 1;
            }
        }
        
    }
    cout << cnt;
    return 0;
}
