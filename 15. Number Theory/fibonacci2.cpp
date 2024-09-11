#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fibo[93];

bool generateFibo(ll n){
    if (n == 0 || n == 1) return true;
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 93; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        if (fibo[i] == n) return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    if (generateFibo(n)) cout << "YES";
    else cout << "NO";    
    return 0;
}