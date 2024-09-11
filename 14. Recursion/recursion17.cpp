#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void leftToRight(ll n){
    if (n < 10) cout << n << " ";
    else{
        leftToRight(n / 10);
        cout << n % 10 << " ";
    }
}

void rightToLeft(ll n){
    if (n < 10) cout << n << " ";
    else{
        cout << n % 10 << " ";
        rightToLeft(n / 10);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    leftToRight(n);
    cout << endl;
    rightToLeft(n);
    return 0;
}