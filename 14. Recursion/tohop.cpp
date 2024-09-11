#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll c(int k, int n){
    if (k == 0 || k == n) return 1;
    return c(k - 1, n - 1) + c(k, n - 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    cout << c(k, n);
    return 0;
}