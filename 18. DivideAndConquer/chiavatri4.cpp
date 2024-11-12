#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int Find(int n, ll k){
    if (n == 1) return 1;
    ll tmp = pow(2, n - 1);
    if (k == tmp) return n;
    else if (k < tmp) return Find(n - 1, k);
    else return Find(n - 1, k - tmp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    ll k;
    cin >> n >> k;
    if (k == pow(2, n - 1)) cout << n << endl;
    cout << Find(n, k);
    return 0;
}