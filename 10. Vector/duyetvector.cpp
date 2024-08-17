#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp;
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    int left, right;
    cin >> left >> right;
    for (auto it = v.begin() + left; it <= v.begin() + right; it++){
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = v.begin() + right; it >= v.begin() + left; it--){
        cout << *it << " ";
    }
    return 0;
}