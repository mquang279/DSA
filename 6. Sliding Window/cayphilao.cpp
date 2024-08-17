#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n], cnt = 0, total = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i < k && a[i] == 1) cnt++;
        if (a[i] == 1) total++;
    }
    if (total - k < 0){
        cout << -1;
        return 0;
    }
    int min_val = k - cnt;
    for (int i = k; i < n; i++){
        if (a[i] == 1) cnt++;
        if (a[i - k] == 1) cnt--;
        min_val = min(min_val, k - cnt);
    }
    cout << min_val;
    return 0;
}