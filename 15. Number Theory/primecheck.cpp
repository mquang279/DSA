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
    while (n--){
        int tmp;
        cin >> tmp;
        if (isPrime(tmp)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}