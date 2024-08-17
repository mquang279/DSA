#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    int i = 0, j = 0;
    while (i < n && j < m){
        while (a[i] < b[j] && i < n){
            i++;
        }
        cout << i << " ";
        j++;
    }
    for (int k = j; k < m; k++) cout << i << " ";
    return 0;
}