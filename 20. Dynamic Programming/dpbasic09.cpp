#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll f[1009];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    f[0] = f[1] = 1;
    for (int i = 2; i <= 1000; i++){
        for (int j = 0; j < i; j++){
            f[i] += f[j] * f[i - j - 1];
            f[i] %= MOD;
        }
    }
    while (t--){
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
    return 0;
}