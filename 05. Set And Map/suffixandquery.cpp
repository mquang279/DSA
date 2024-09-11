#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int prefix[n] = {0};
    set<int> se;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--){
        se.insert(a[i]);
        prefix[i] = se.size();
    }
    cout << endl;
    int t;
    cin >> t;
    while (t--){
        int pos;
        cin >> pos;
        cout << prefix[pos] << endl;
    }
    return 0;
}