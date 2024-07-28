#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void chuanHoaTen(string& s){
    for (char &x : s){
        x = tolower(x);
    }
    s[0] = toupper(s[0]);
}

void chuanHoaNgaySinh(string& s){
    if (s[1] == '/') s = '0' + s;
    if (s[4] == '/') s.insert(s.begin() + 3, '0');
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string name;
    getline(cin, name);
    stringstream ss(name);
    string word, res;
    while (ss >> word){
        chuanHoaTen(word);
        res += word + " ";
    }
    cout << res << endl;
    string ngaySinh;
    cin >> ngaySinh;
    chuanHoaNgaySinh(ngaySinh);
    cout << ngaySinh;
    return 0;
}