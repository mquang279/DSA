#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

bool isPerfect(string s){
    int sum = 0;
    for (char x : s){
        if (!isPrime(x - '0')) return false;
        sum += (x - '0');
    }
    return isPrime(sum);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    if (isPerfect(s)) cout << "YES";
    else cout << "NO";
    return 0;
}