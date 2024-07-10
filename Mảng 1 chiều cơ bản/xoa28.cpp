#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> res;
    int tmp;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp != 28){
            res.push_back(tmp);
        }
    }
    if (res.size() == 0) cout << "EMPTY";
    else{
        for (int x : res){
            cout << x << " ";
        }
    }
    return 0;
}