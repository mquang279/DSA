#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n][n];
    int lowerSidePrimes = 0, upperSidePrimes = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
            if (i < j && isPrime(a[i][j])) upperSidePrimes++;
            if (i > j && isPrime(a[i][j])) lowerSidePrimes++;
        }
    }
    if (lowerSidePrimes < upperSidePrimes) cout << "28tech";
    else if (lowerSidePrimes > upperSidePrimes) cout << "29tech";
    else cout << "30tech";
    return 0;
}