#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    int pos1 = lower_bound(a, a + n, x) - a;
    int pos2 = upper_bound(a, a + n, x) - a;
    if (pos1 == n) cout << "-1" << endl;
    else cout << pos1 << endl;
    if (pos2 == n) cout << "-1" << endl;
    else cout << pos2 << endl;
    if (pos1 != n && a[pos1] == x) cout << pos1 << endl;
    else cout << "-1" << endl;
    pos2--;
    if (pos2 >= 0 && a[pos2] == x) cout << pos2 << endl;
    else cout << "-1" << endl;
    cout << pos2 - pos1 + 1 << endl;
    return 0;
}