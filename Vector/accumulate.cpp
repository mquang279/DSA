#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    cout << *min_element(v.begin(), v.end()) << endl
         << *max_element(v.begin(), v.end()) << endl
         << accumulate(v.begin(), v.end(), 0);
    return 0;
}