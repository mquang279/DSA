#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<bool> sieve(1000001, true);
bool check[1000001] = {true};

bool hasPrimeFactorExp2(int n){
    for (int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        while (n % i == 0){
            cnt++;
            n /= i;
        }
        if (cnt == 1) return false;
    }
    if (n != 1) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (hasPrimeFactorExp2(i)) cout << i << " ";
    }
    return 0;
}