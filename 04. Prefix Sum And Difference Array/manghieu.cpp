#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], diff[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i == 0) diff[i] = a[i];
        else diff[i] = a[i] - a[i - 1];
    }
    for (int x : diff) cout << x << " ";
    return 0;
}