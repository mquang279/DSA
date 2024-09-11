#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<bool> sieve(1e6 + 1, true);

void generateSieve(){
    sieve[0] = sieve[1] = false;
    for (int i = 2; i <= sqrt(1e6); i++){
        if (sieve[i]){
            for (int j = i * i; j <= 1e6; j += i){
                sieve[j] = false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    generateSieve();
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (sieve[i]) cnt++;
    }
    cout << cnt;
    return 0;
}