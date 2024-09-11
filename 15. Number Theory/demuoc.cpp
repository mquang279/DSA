#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    ll countOfDivisors = 1;
    while (n--){
        int p, e;
        cin >> p >> e;
        countOfDivisors = ((countOfDivisors % MOD) * ((e + 1) % MOD)) % MOD;
    }
    cout << countOfDivisors;
    return 0;
}