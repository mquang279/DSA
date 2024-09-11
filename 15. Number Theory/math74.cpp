#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    ll factor = 0, maxExp = 0;
    for (int i = 2; i <= sqrt(n); i++){
        ll cnt = 0;
        while (n % i == 0){
            cnt++;
            n /= i;
        }
        if (cnt > maxExp){
            maxExp = cnt;
            factor = i;
        }
    }
    if (maxExp == 0) factor = n;
    cout << factor << " " << maxExp;
    return 0;
}