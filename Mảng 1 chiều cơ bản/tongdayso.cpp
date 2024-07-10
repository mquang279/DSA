#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(int a[], int n, int k){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (i < k) sum += a[i];
        else{
            cout << sum << " ";
            sum += a[i];
            sum -= a[i - k];
        }
    }
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 2; i <= 4; i++){
        solve(a, n, i);
    }
    return 0;
}