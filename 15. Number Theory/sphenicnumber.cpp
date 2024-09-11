#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isSphenic(ll n){
    int countFactor = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) countFactor++;
        int cnt = 0;
        while (n % i == 0){
            n /= i;
            cnt++;
        }
        if (cnt > 1) return false;
    }
    if (n > 1) countFactor++;
    return countFactor == 3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    if (isSphenic(n)) cout << 1;
    else cout << 0;
    return 0;
}