#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
        if (i != n - 1){
            cout << "Buoc " << i + 1 << ": ";
            for (int x : a) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}