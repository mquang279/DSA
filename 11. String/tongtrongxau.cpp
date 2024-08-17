#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void chuanHoa(string &s){
    while (s[0] == '0' && s.length() > 1){
        s.erase(s.begin());
    }
}

string add(string a, string b){
    while (a.length() < b.length()) a = '0' + a;
    while (b.length() < a.length()) b = '0' + b;
    int du = 0;
    string res = "";
    for (int i = a.length() - 1; i >= 0; i--){
        int tmp = (a[i] - '0') + (b[i] - '0') + du;
        du = tmp / 10;
        tmp %= 10;
        res = to_string(tmp) + res;
    }
    if (du != 0) res = to_string(du) + res;
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    string curr = "";
    vector<string> v;
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
    string res = "0";
    for (string x : v){
        res = add(res, x);
    }
    cout << res;
    return 0;
}