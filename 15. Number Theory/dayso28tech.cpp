#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll f[1000001];

void generate28Arr(){
    f[1] = 2;
    f[2] = 8;
    for (int i = 3; i <= 1e6; i++){
        f[i] = ((2 * f[i - 1]) % MOD + (8 * f[i - 2]) % MOD) % MOD;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    generate28Arr();
    while (t--){
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
    return 0;
}