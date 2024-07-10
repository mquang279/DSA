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
    int tmp, prefix[n];
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (i == 0) prefix[i] = tmp;
        else prefix[i] = prefix[i - 1] + tmp;
    }
    for (int i = 1; i < n; i++){
        if (isPrime(prefix[i - 1]) && isPrime(prefix[n - 1] - prefix[i])){
            cout << i << " ";
        }
    }
    return 0;
}