#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    while (k--){
        int tmp = a[0];
        for (int i = 0; i < n - 1; i++){
            a[i] = a[i + 1];
        }
        a[n - 1] = tmp;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}