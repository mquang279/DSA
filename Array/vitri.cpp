#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);
    }
    cout << min_val << endl;
    for (int i = 0; i < n; i++){
        if (a[i] == min_val) cout << i << " ";
    }
    cout << endl;
    cout << max_val << endl;
    for (int i = n - 1; i >= 0; i--){
        if (a[i] == max_val) cout << i << " ";
    }
    return 0;
}