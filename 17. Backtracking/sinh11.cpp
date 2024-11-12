#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> v;
int n, currentSum;
vector<string> res;

void Try(int start){
    if (currentSum == n){
        string tmp = "";
        for (int i = 0; i < v.size(); i++){
            if (i != v.size() - 1) tmp += to_string(v[i]) + "+";
            else tmp += to_string(v[i]);
        }
        res.push_back(tmp);
        return;
    }
    for (int i = start; i >= 1; i--){
        if (currentSum + i <= n){
            currentSum += i;
            v.push_back(i);
            Try(i);
            currentSum -= i;
            v.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    Try(n);
    cout << res.size() << endl;
    for (string s : res) cout << s << endl;
    return 0;
}