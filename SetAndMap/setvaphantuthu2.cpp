#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    set<int> se;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    cout << se.size() << endl;
    vector<int> v;
    for (int x : se) v.push_back(x);
    cout << v[v.size() - 1] << " " << v[0] << endl
         << v[v.size() - 2] << " " << v[1];
    return 0;
}