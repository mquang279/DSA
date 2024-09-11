#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[1001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }    
    vector<int> v;
    v.push_back(a[0]);
    for (int i = 1; i < n; i++){
        if (a[i] != v[v.size() - 1]) v.push_back(a[i]);
    }    
    for (int i : v){
        cout << i << " ";
    }
    return 0;
}