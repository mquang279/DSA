#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int boys[n], girls[m];
    for (int &x : boys) cin >> x;
    for (int &x : girls) cin >> x;
    sort(boys, boys + n);
    sort(girls, girls + m);
    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m){
        if (boys[i] > girls[j]){
            cnt++;
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    cout << cnt;
    return 0;
}