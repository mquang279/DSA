#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        int j = i + 1;
        while (a[j] <= a[i] && j < n){
            j++;
        }
        if (j >= n) cout << -1 << " ";
        else cout << a[j] << " ";
    }
    return 0;
}