#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string my_to_string(long long n){
    string s = to_string(n);
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long long n; cin >> n;
    cout << my_to_string(n) << endl;
}
