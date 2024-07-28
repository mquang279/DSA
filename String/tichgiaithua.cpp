#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    vector<int> v;
    for (char x : s){
        if (x != '1' && x != '0'){
            if (x == '4'){
                v.push_back(2);
                v.push_back(2);
                v.push_back(3);
            }
            else if (x == '8'){
                v.push_back(2);
                v.push_back(2);
                v.push_back(2);
                v.push_back(7);
            }
            else if (x == '6'){
                v.push_back(5);
                v.push_back(3);
            }
            else if (x == '9'){
                v.push_back(7);
                v.push_back(3);
                v.push_back(3);
                v.push_back(2);
            }
            else v.push_back(x - '0');
        }
    }
    sort(v.begin(), v.end(), __greater());
    for (int x : v) cout << x;
    return 0;
}