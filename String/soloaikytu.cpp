#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    int cntDigit = 0, cntAlpha = 0, cntOther = 0;
    for (char x : s){
        if (isdigit(x)) cntDigit++;
        else if (isalpha(x)) cntAlpha++;
        else cntOther++;
    }
    cout << cntAlpha << " " << cntDigit << " " << cntOther;
    return 0;
}