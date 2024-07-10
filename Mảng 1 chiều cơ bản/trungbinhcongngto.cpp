#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return n >= 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp, cnt = 0, sum = 0;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (isPrime(tmp)){
            cnt++;
            sum += tmp;
        }    
    }
    cout << fixed << setprecision(3) << 1.00 * sum / cnt;
    return 0;
}