#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string decimalToBinary(ll n){
    if (n == 0) return "0";
    if (n == 1) return "1";
    return decimalToBinary(n / 2) + to_string(n % 2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    cout << decimalToBinary(n);
    return 0;
}