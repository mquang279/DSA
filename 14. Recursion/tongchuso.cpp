#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int sumOfDigits(ll n){
    if (n < 10) return n;
    return sumOfDigits(n / 10) + n % 10;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    cout << sumOfDigits(n);
    return 0;
}