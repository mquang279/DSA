#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    string digit = "";
    string character = "";
    for (char x : s){
        if (isdigit(x)) digit += x;
        else character += x;
    }
    cout << digit << endl;
    cout << character;
    return 0;
}