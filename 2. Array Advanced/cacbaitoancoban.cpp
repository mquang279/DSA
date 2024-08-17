#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod = 1e9 + 7;

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

bool isPalindrome(int a[], int n){
    for (int i = 0; i < n / 2; i++){
        if (a[i] != a[n - i - 1]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    int max_val = INT_MIN, min_val = INT_MAX, primeCount = 0;
    for (int &x : a){
        cin >> x;
        
        max_val = max(max_val, x);
        min_val = min(min_val, x);
        if (isPrime(x)) primeCount++;
    }
    for (int i = 0; i < n; i++){
        if (a[i] == max_val){
            cout << max_val << " " << i << endl;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--){
        if (a[i] == min_val){
            cout << min_val << " " << i << endl;
            break;
        }
    }
    cout << primeCount << endl;
    int b[n];
    for (int i = 0; i < n; i++) b[i] = a[i];
    sort(b, b + n);
    cout << max(b[0] * b[1], b[n - 1] * b[n - 2]) << endl;
    if (isPalindrome(a, n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    ll tich = 1;
    for (int x : a){
        tich = ((tich % mod) * (x % mod)) % mod;
    }
    cout << tich << endl;
    return 0;
}