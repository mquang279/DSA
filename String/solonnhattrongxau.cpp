#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void chuanHoa(string &s){
    while (s[0] == '0' && s.length() > 1){
        s.erase(s.begin());
    }
}

bool cmp(string a, string b){
    while (a.length() < b.length()) a = '0' + a;
    while (b.length() < a.length()) b = '0' + b;
    return a < b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    vector<string> v;
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
    cout << *max_element(v.begin(), v.end(), cmp);
    return 0;
}