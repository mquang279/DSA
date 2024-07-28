#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(string a, string b){
    if (a + b > b + a) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    vector<string> v;
    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    for (string x : v) cout << x;
    return 0;
}