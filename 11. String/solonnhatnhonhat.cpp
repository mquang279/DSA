#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int m, s;
    cin >> m >> s;
    if (s > 9 * m || (m > 1 && s == 0)){
        cout << "NOT FOUND";
        return 0;
    }
    vector<int> min_val(m);
    int s2 = s;
    s -= 1;
    for (int i = m - 1; i >= 0; i--){
        if (s >= 9){
            min_val[i] = 9;
            s -= 9;
        }
        else{
            min_val[i] = s;
            s = 0;
        }
    }
    min_val[0] += 1;
    vector<int> max_val(m);
    for (int i = 0; i < m; i++){
        if (s2 >= 9){
            max_val[i] = 9;
            s2 -= 9;
        }
        else{
            max_val[i] = s2;
            s2 = 0;
        }
    }
    for (int x : min_val) cout << x;
    cout << endl;
    for (int x : max_val) cout << x;
    return 0;
}