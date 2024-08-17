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
    int pos = 0;
    for (int x : a){
        if (x == b[pos]) pos++;
        if (pos == m) break;
    }
    if (pos == m) cout << "YES";
    else cout << "NO";
    return 0;
}