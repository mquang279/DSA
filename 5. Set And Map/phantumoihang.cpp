#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    map<int, int> mp;
    int tmp;
    bool check = false;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> tmp;
            if ((mp.find(tmp) != mp.end() || i == 0) && mp[tmp] == i){
                mp[tmp] = i + 1;
                if (mp[tmp] == n) check = true;
            }
        }
    }
    if (!check) cout << "NOT FOUND";
    else{
        for (auto it : mp) if (it.second == n) cout << it.first << " ";
    }
    return 0;
}