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
    for (int i = 1; i < n; i++){
        int pos = i - 1, val = a[i];
        while (pos >= 0 && a[pos] > val){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = val;
        cout << "Buoc " << i << ": ";
        for (int x : a) cout << x << " ";
        cout << endl;
    }
    return 0;
}