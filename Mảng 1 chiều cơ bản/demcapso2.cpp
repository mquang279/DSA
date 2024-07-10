#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int res = INT_MAX;
    for (int i = 1; i < n; i++){
        res = min(abs(a[i] - a[i - 1]), res);
    }
    cout << res;
    return 0;
}