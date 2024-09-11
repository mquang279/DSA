#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int kthPrimeFactor(int n, int k){
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (cnt == k) return i;
        while (n % i == 0){
            cnt++;
            if (cnt == k) return i;
            n /= i;
        }
    }
    if (n != 1) cnt++;
    if (cnt != k) return -1;
    else return n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    cout << kthPrimeFactor(n, k);
    return 0;
}