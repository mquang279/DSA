#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    vector<int> v;
    while (t--){
        int n;
        cin >> n;
        if (n == 1){
            int a;
            cin >> a;
            v.push_back(a);
        }
        else if (!v.empty()) v.pop_back();
    }
    if (v.empty()){
        cout << "EMPTY";
        return 0;
    }
    for (int x : v){
        cout << x << " ";
    }
    return 0;
}