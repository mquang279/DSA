#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int minPrimeDivisor(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return i;
    }
    return n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << minPrimeDivisor(i) << endl;
    }
    return 0;
}