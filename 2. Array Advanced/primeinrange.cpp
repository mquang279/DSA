#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int nt[1000001];

void sang(){
    for (int i = 0; i <= 1e6; i++){
        nt[i] = 1;
    }
    nt[0] = nt[1] = 0;
    for (int i = 2; i <= sqrt(1e6); i++){
        if (nt[i]){
            for (int j = i * i; j <= 1e6; j += i){
                nt[j] = 0;
            }
        }
    }

    for (int i = 1; i <= 1e6; i++){
        nt[i] += nt[i - 1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    sang();
    int t;
    cin >> t;
    while (t--){
        int l, r;
        cin >> l >> r;
        cout << nt[r] - nt[l - 1] << endl;
    }
    return 0;
}