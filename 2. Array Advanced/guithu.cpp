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
    for (int i = 0; i < n; i++){
        if (i == 0) cout << a[i + 1] - a[i] << " " << a[n - 1] - a[i] << endl;
        else if (i == n - 1) cout << a[i] - a[i - 1] << " " << a[i] - a[0] << endl;
        else cout << min(a[i + 1] - a[i], a[i] - a[i - 1]) << " " << max(a[n - 1] - a[i], a[i] - a[0]) << endl;
    }
    return 0;
}