#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort(b, b + m);
    for (int x : a){
        auto it = upper_bound(b, b + m, x);
        cout << m - (it - b) << " ";
    }
    return 0;
}