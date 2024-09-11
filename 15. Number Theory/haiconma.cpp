#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll c(ll i){
    return i * (i - 1) / 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (i == 1) cout << 0 << endl;
        else cout << c(i * i) - (i - 2) * (i - 1) * 4 << endl;
    }
    return 0;
}