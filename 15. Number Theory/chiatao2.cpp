#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll combination(int n, int k){
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k;
    ll res = 1;
    for (int i = 0; i < k; i++){
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    cout << combination(m + n - 1, n - 1);
    return 0;
}