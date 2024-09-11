#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool hasOnlyPrimeDigits(int n){
    while (n != 0){
        int tmp = n % 10;
        if (tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7) return false;
        n /= 10;
    }
    return true;
}

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++){
        if (hasOnlyPrimeDigits(i) && isPrime(i)) cnt++;
    }
    cout << cnt;
    return 0;
}