#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int getFirstDigit(ll n){
    if (n < 10) return n;
    return getFirstDigit(n / 10);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    cout << getFirstDigit(n);
    return 0;
}