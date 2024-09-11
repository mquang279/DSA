#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

char convertToHexChar(int a){
    if (a < 10) return (char)('0' + a);
    return (char)('A' + (a - 10));
}

string convertDecimalToHex(ll a){
    if (a < 16) return string(1, convertToHexChar(a));
    return convertDecimalToHex(a / 16) + convertToHexChar(a % 16);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    cout << convertDecimalToHex(n);
    return 0;
}