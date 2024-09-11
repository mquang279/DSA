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
    vector<int> v(a, a + n);
    sort(v.begin(), v.end());
    for (int x : a){
        auto it = upper_bound(v.begin(), v.end(), x);
        if (it != v.end()) cout << *it << " ";
        else cout << "_" << " ";
    }
    return 0;
}