#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int m; cin >> m;
    vector<int> v(m);
    for(int i = 0; i < m; i++) cin >> v[i];
    int n; cin >> n;
    while(n--){
        int tt;
        cin >> tt;
        if(tt == 1){
            int pos, val;
            cin >> pos >> val;
            v.insert(v.begin() + pos, val);
        }
        else{
            int pos;
            cin >> pos;
            v.erase(v.begin() + pos);
        }
    }
    if (v.empty()) cout << "EMPTY";
    else{
        for (int x : v) cout << x << " ";
    }
    return 0;
}