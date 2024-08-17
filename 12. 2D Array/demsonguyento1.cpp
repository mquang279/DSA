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
    int tmp, cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> tmp;
            if ((i == j || j == n - i - 1) && isPrime(tmp)) cnt++;
        }
    }
    cout << cnt;
    return 0;
}