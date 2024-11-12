#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;
string s;

void Try(){
    if (s.length() == k){
        cout << s << endl;
        return;
    }
    for (int i = 1; i <= n; i++){
        s += i + '0';
        Try();
        s.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    Try();
    return 0;
}