#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i < k){
            min_val = min(min_val, a[i]);
            max_val = max(max_val, a[i]);
        }
    }
    cout << min_val << " " << max_val << endl;
    for (int i = k; i < n; i++){
        if (a[i - k] == min_val){
            min_val = *min_element(a + i - k + 1, a + i + 1);
        }
        if (a[i - k] == max_val){
            max_val = *max_element(a + i - k + 1, a + i + 1);
        }
        if (a[i] > max_val) max_val = a[i];
        if (a[i] < min_val) min_val = a[i];
        cout << min_val << " " << max_val << endl;
    }
    return 0;
}