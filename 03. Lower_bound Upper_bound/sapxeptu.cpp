#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    string a[n];
    for (string &s : a) cin >> s;
    sort(a, a + n);
    for (string s : a) cout << s << " ";
    cout << endl;
    for (int i = n - 1; i >= 0; i--) cout << a[i] << " ";
    return 0;
}