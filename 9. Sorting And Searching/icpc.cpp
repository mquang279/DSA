#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    int cnt = 1;
    for (int i = 1; i < n; i++){
        if (a[i] - a[i - 1] > k){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}