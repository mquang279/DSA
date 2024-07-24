#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<char> nhap(){
    char x;
    vector<char> v;
    while (cin >> x){
        v.push_back(x);
    }
    return v;
}

vector<char> thaydoi(vector<char> v){
    vector<char> res;
    for (char x : v){
        if (isdigit(x)) res.push_back(x);
        else{
            if (isupper(x)) res.push_back(tolower(x));
            else res.push_back(toupper(x));
        }
    }
    return res;
}

void in(vector<char> v){
    for (char x : v) cout << x << " ";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    in(res);
    return 0;
}
