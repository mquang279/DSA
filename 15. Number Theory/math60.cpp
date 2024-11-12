#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

map<ll, ll> mp;

void primeFactors(int n){
    for (int i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
            mp[i]++;
            n /= i;
        }
    }
    if (n != 1) mp[n]++;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        primeFactors(a[i]);
    }
    ll numOfDivisors = 1;
    for (auto it : mp){
        numOfDivisors = ((numOfDivisors % MOD) * ((it.second + 1) % MOD)) % MOD;
    }
    cout << numOfDivisors;
    return 0;
}