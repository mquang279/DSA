#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    ll prefix[n + 1];
    prefix[0] = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        prefix[i + 1] = prefix[i] + a[i];
    }
    int t;
    cin >> t;
    while (t--){
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << " "; 
    }
    return 0;
}