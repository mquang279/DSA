#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<bool> sieve(1000001, true);
int check[1000001] = {false};

void generateSieve(){
    sieve[0] = sieve[1] = false;
    for (int i = 2; i <= sqrt(1e6); i++){
        if (sieve[i]){
            for (int j = i * i; j <= 1e6; j += i){
                sieve[j] = false;
            }
        }
    }
}

void generateArr(){
    for (int i = 2; i <= sqrt(1e6); i++){
        if (sieve[i]){
            for (int j = i * i; j <= 1e6; j += i * i){
                check[j] = true;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    generateSieve();
    generateArr();
    for (int i = a; i <= b; i++){
        if (check[i]) cout << i << " ";
    }
    return 0;
}