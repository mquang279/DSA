#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(string s){
    string emailTag = "";
    int cnt = 0;
    for (char x : s){
        if (!isdigit(x) && !isalpha(x) && x != '@' && x != '.' && x != '_') return false;
        emailTag += x;
        if (x == '@'){
            emailTag = "";
            cnt++;
        }
    }
    if (cnt != 1) return false;
    if (emailTag != "gmail.com" && emailTag != "28tech.com.vn" && emailTag != "yahoo.com" && emailTag != "hotmail.com") return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string emailAddress;
        getline(cin, emailAddress);
        if (check(emailAddress)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}