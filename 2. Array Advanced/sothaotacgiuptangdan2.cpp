#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, d;
    cin >> n >> d;
    int a[n];
    for (int &x : a) cin >> x;
    ll res = 0;
    for (int i = 1; i < n; i++){
        if (a[i] <= a[i - 1]){
            // Tìm số gần a[i - 1] - a[i] + d chia hết cho d
            int tmp = (a[i - 1] - a[i] + d) / d;
            res += tmp;
            a[i] += d * tmp;
        }
    }
    cout << res;
    return 0;
}