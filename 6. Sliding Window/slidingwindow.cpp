#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    long long sum = 0;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i < k) sum += a[i];
    }
    long long max_val = sum;
    int pos = k - 1;
    for (int i = k; i < n; i++){
        sum += a[i];
        sum -= a[i - k];
        if (sum > max_val){
            pos = i;
            max_val = sum;
        }
    }
    cout << max_val << endl;
    for (int i = pos - k + 1; i <= pos; i++){
        cout << a[i] << " ";
    }
    return 0;
}