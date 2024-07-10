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
    for (int i = 1; i < n - 1; i++){
        if (a[i] < a[i - 1] && a[i] < a[i + 1]) cout << a[i] << " ";    
    }
    return 0;
}