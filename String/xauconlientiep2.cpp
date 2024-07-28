#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    int currentLength = 1, maxLength = 1;
    string current = "", res = "";
    current = s[0];
    res = s[0];
    for (int i = 1; i < s.length(); i++){
        if (s[i] != s[i - 1]){
            current += s[i];
            currentLength++;
        }
        else{
            current = s[i];
            currentLength = 1;
        }
        if ((currentLength > maxLength) || (currentLength == maxLength && current > res)){
            maxLength = currentLength;
            res = current;
        }
    }
    cout << res;
    return 0;
}