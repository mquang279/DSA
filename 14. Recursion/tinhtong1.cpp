#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(int n){
    if (n == 1) return 1;
    return 1ll * n + solve(n - 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}