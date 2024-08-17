#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    int sum = 0;
    for (char x : s) sum += (x - '0');
    cout << sum;
    return 0;
}