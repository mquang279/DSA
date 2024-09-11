#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int getMaxDigit(ll n){
    if (n < 10) return n;
    return max((int)(n % 10), getMaxDigit(n / 10));
}

int getMinDigit(ll n){
    if (n < 10) return n;
    return min((int)(n % 10), getMinDigit(n / 10));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    cout << getMaxDigit(n) << " " << getMinDigit(n);
    return 0;
}