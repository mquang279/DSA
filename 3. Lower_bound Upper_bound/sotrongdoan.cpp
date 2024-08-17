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
    int t;
    cin >> t;
    sort(a, a + n);
    while (t--){
        int l, r;
        cin >> l >> r;
        auto it1 = lower_bound(a, a + n, l);
        auto it2 = upper_bound(a, a + n, r);
        it2--;
        cout << (it2 - a) - (it1 - a) + 1<< endl;
    }
    return 0;
}