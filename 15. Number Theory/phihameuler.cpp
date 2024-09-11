#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll eulerFunction(ll n){
    ll res = n;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) res -= res / i;
        while (n % i == 0){
            n /= i;
        }
    }
    if (n != 1) res -= res / n;
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    cout << eulerFunction(n);
    return 0;
}