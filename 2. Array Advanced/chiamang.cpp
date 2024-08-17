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
    int min_length, max_length;
    min_length = min(k, n - k);
    max_length = max(k, n - k);
    ll min_val = 0, max_val = 0;
    for (int i = 0; i < min_length; i++){
        min_val += 1ll * a[i];
    }
    for (int i = n - 1; i >= min_length; i--){
        max_val += 1ll * a[i];
    }
    cout << max_val - min_val;
    return 0;
}