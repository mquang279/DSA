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
    sort(a, a + n, __greater());
    ll res = 0, cnt = 0;
    for (int x : a){
        if (x - cnt > 0) res += x - cnt;
        cnt++;
    }
    cout << res;
    return 0;
}