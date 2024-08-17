#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    ll min_val = 0, max_val = 0;
    for (int i = 0; i < n; i += 2){
        min_val = min_val * 10 + a[i];
    }
    for (int i = 1; i < n; i += 2){
        max_val = max_val * 10 + a[i];
    }
    cout << min_val + max_val;
    return 0;
}