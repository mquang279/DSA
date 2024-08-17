#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, l;
    cin >> n >> l;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    double maxRadius = max(a[0], l - a[n - 1]);
    for (int i = 1; i < n; i++){
        maxRadius = max(maxRadius, (a[i] - a[i - 1]) / 2.00);
    }
    cout << fixed << setprecision(10) << maxRadius;
    return 0;
}