#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int lastPrimeFactor(int n){
    int res;
    for (int i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
            res = i;
            n /= i;
        }
    }
    if (n != 1) res = n;
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << lastPrimeFactor(n) << endl;
    }
    return 0;
}