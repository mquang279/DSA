#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll countDivisors(ll n){
    ll res = 0;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            res++;
            if (i != n / i) res++;
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    cout << countDivisors(n);
    return 0;
}