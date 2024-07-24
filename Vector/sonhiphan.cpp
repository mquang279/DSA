#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<char> convert_number(ll n){
    vector<char> v;
    while (n != 0){
        if (n % 2 == 0) v.push_back('0');
        else v.push_back('1');
        n /= 2;
    }
    reverse(v.begin(), v.end());
    while (v.size() < 64){
        v.insert(v.begin(), '0');
    }
    return v;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for(char x : bin){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}