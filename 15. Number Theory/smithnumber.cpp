#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

int sumOfDigits(int n){
    int res = 0;
    while (n != 0){
        res += n % 10;
        n /= 10;
    }
    return res;
}

bool isSmithNumber(int n){
    if (isPrime(n)) return false;
    int sumFactorDigits = 0, tmp = n;
    for (int i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
            sumFactorDigits += sumOfDigits(i);
            n /= i;
        }
    }
    if (n != 1) sumFactorDigits += sumOfDigits(n);
    return sumFactorDigits == sumOfDigits(tmp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    if (isSmithNumber(n)) cout << "YES";
    else cout << "NO";
    return 0;
}