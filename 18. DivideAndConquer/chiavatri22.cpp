#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll F[70];

void generateLength(){
    F[1] = 1;
    F[2] = 1;
    F[3] = 2;
    for (int i = 4; i <= 60; i++){
        F[i] = F[i - 1] + F[i - 2] + F[i - 3];
    }
}

string Find(ll n, ll k){
    if (n == 1) return "28tech";
    if (n == 2) return "C++";
    if (n == 3){
        if (k == 1) return "DSA";
        else return "JAVA";
    }
    if (k <= F[n - 3]) return Find(n - 3, k);
    else if (k <= F[n - 2] + F[n - 3]) return Find(n - 2, k - F[n - 3]);
    else return Find(n - 1, k - F[n - 2] - F[n - 3]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    generateLength();
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        cout << Find(n, k) << endl;
    }
    return 0;
}