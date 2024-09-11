#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

bool isPerfect(ll n){
    for (int i = 2; i <= 32; i++){
        ll check = pow(2, i - 1) * (pow(2, i) - 1);
        if (check == n && isPrime(i) && isPrime(pow(2, i) - 1)) return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    if (isPerfect(n)) cout << "YES";
    else cout << "NO";
    return 0;
}