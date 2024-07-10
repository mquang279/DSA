#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x, k;
    cin >> n >> x >> k;
    int a[n + 1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = n - 1; i >= k - 1; i--){
        a[i + 1] = a[i];
    }
    a[k - 1] = x;
    n++;
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}