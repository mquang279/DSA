#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll combination(int k, int n){
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k;
    ll res = 1;
    for (int i = 0; i < k; i++){
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << combination(j, i) << " "; 
        }
        cout << endl << endl;
    }
    return 0;
}