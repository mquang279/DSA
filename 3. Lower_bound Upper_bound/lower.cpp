#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    auto it = upper_bound(a, a + n, x);
    if (it == a) cout << "NOT FOUND";
    else{
        it--;
        cout << *it;
    }
    return 0;
}