#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> unique_vector(vector<int> v){
    vector<int> res;
    for (int x : v){
        if (res.empty() || x != *res.rbegin()) res.push_back(x);
    }
    return res;
}

vector<int> nhap(){
    int n, tmp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    return v;
}

void in(vector<int> v){
    for (int x : v) cout << x << " ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    vector<int> v = nhap();
    vector<int> res = unique_vector(v);
    in(res);
    return 0;

}