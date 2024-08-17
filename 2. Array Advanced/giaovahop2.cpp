#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    int i = 0, j = 0;
    vector<int> v;
    while (i < n && j < m){
        if (a[i] == b[j]){
            v.push_back(a[i]);
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j]){
            cout << a[i] << " ";
            i++;
        }
        else{
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < n){
        cout << a[i] << " ";
        i++;
    }
    while (j < m){
        cout << b[j] << " ";
        j++;
    }
    cout << endl;
    for (int x : v) cout << x << " ";
    return 0;
}