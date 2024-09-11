#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    ll tmp, prefix[n + 1];
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (i == 0) prefix[i + 1] = tmp;
        else prefix[i + 1] = prefix[i] + tmp;
    }
    prefix[0] = 0;
    for (int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        cout << prefix[r + 1] - prefix[l] << endl;
    }
    return 0;
}