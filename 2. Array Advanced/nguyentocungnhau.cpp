#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], cnt = 0;
    for (int &x : a) cin >> x;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int tmp = gcd(a[i], a[j]);
            if (tmp == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}