#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    unordered_set<int> se;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (se.find(a[i]) == se.end()){
            cout << a[i] << " ";
            se.insert(a[i]);
        }
    }
    return 0;
}