#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    char a[n];
    for (char &x : a) cin >> x;
    sort(a, a + n);
    for (char x : a) cout << x << " ";
    cout << endl;
    for (int i = n - 1; i >= 0; i--) cout << a[i] << " ";
    return 0;
}