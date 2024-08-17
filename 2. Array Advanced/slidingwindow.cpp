#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    ll sum = 0, maxSum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i < k) sum += 1ll * a[i];
    }
    int pos = 0;
    maxSum = sum;
    for (int i = k; i < n; i++){
        sum = sum + a[i] - a[i - k];
        if (sum > maxSum){
            maxSum = sum;
            pos = i - k + 1;
        }
    }
    cout << maxSum << endl;
    for (int i = pos; i < pos + k; i++) cout << a[i] << " ";
    return 0;
}