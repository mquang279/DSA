#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> v;
    vector<int> pos;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        if (isPrime(x + y + z)){
            vector<int> tmp;
            tmp.push_back(x);
            tmp.push_back(y);
            tmp.push_back(z);
            v.push_back(tmp);
            cnt++;
        }
    }
    if (cnt == 0){
        cout << "28tech";
    }
    for (int i = v.size() - 1; i >= 0; i--){
        cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << endl;
    }
    return 0;
}