#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll f(int n){
    if (n == 1) return 0;
    if (n == 2) return 1;
    int f1 = 0, f2 = 1;
    for (int i = 3; i <= n; i++){
        int tmp = ((f1 % MOD) + (f2 % MOD)) % MOD;
        f1 = f2;
        f2 = tmp;
    }
    return f2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}