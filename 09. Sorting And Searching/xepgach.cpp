#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, __greater());
    int min_val = a[0];
    for (int i = 1; i < n; i++){
        min_val = min(min_val - 1, a[i]);
        if (min_val <= 0){
            cout << i + 1;
            return 0;
        }
    }
    cout << n;
    return 0;
}