#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int countDigits(ll n){
    if (n < 10) return 1;
    return 1 + countDigits(n / 10);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    cout << countDigits(n);
    return 0;
}