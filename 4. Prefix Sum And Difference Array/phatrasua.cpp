#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k, q;
    cin >> n >> k >> q;
    int d[200002] = {0};
    for (int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    int prefix[200002] = {0};
    if (d[1] >= k) prefix[1] = 1;
    else prefix[1] = 0;
    for (int i = 2; i <= 200000; i++){
        d[i] += d[i - 1];
        if (d[i] >= k) prefix[i] = prefix[i - 1] + 1;
        else prefix[i] = prefix[i - 1];
    }
    while (q--){
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }
    return 0;
}