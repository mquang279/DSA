#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void nhap(vector<int>& v){
    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
}

void in(vector<int> v){
    for (int x : v) cout << x << " ";
}

void rev(vector<int> &v){
    for (int i = 0; i < v.size() / 2; i++){
        swap(v[i], v[v.size() - i - 1]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    vector<int> v;
    nhap(v);
    rev(v);
    in(v);
    return 0;

}
