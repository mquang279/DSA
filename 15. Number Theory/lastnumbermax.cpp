#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<bool> sieve(10000001, true);

void generateSieve(){
    sieve[0] = sieve[1] = false;
    for (int i = 2; i <= sqrt(1e7); i++){
        if (sieve[i]){
            for (int j = i * i; j <= 1e7; j+=i){
                sieve[j] = false;
            }
        }
    }
}

bool hasLastDigitMax(int n){
    int lastDigit = n % 10;
    while (n != 0){
        int digit = n % 10;
        if (digit > lastDigit) return false;
        n /= 10;
    }
    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int cnt = 0;
    generateSieve();
    for (int i = 2; i < n; i++){
        if (sieve[i] && hasLastDigitMax(i)){
            cout << i << " ";
            cnt++;
        }
    }
    cout << endl << cnt;
    return 0;
}