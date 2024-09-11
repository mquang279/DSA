#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i < k) sum += a[i];
    }
    cout << sum << " ";
    for (int i = k; i < n; i++){
        sum += a[i];
        sum -= a[i - k];
        cout << sum << " ";
    }
    return 0;
}