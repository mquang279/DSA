#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isSquare(ll n){
    ll tmp = sqrt(n);
    return tmp * tmp == n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    if (isSquare(n)) cout << "YES";
    else cout << "NO";
    return 0;
}