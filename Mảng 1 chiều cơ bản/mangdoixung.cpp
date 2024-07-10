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
    for (int i = 0; i < n / 2; i++){
        if (a[i] != a[n - i - 1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}