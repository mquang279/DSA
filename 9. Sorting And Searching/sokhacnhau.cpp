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
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (a[i] != a[i + 1] || i == n - 1) cnt++;
    }
    cout << cnt;
    return 0;
}