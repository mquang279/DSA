#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    set<pair<int, int>> se;
    while (n--){
        int a, b;
        cin >> a >> b;
        se.insert({a, b});
    }
    cout << se.size();
    return 0;
}