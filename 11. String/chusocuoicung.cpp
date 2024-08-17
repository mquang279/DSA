#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    int p[4] = {6, 8, 4, 2};
    int res = 0;
    for (char x : s){
        res = res * 10 + (x - '0');
        res %= 4;
    }
    cout << p[res];
    return 0;
}