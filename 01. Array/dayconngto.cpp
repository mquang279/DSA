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
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = i; j < n; j++){
            sum += a[j];
            if (isPrime(sum)) res++;
        }
    }
    cout << res;
    return 0;
}