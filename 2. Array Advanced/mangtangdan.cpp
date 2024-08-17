#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    for (int i = 1; i < n; i++){
        if (a[i] <= a[i - 1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}