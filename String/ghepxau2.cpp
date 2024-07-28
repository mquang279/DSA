#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void chuanHoa(string &s){
    while (s[0] == '0' && s.length() > 1){
        s.erase(s.begin());
    }
}

bool cmp(string a, string b){
    if (a + b > b + a) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    vector<string> v;
    cin >> s;
    string curr = "";
    for (char x : s){
        if (isdigit(x)) curr += x;
        else{
            if (curr != ""){
                chuanHoa(curr);
                v.push_back(curr);
            }
            curr = "";
        }
    }
    if (curr != ""){
        chuanHoa(curr);
        v.push_back(curr);
    }
    sort(v.begin(), v.end(), cmp);
    for (string x : v) cout << x;
    return 0;
}