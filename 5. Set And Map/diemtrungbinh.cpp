#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    map<string, vector<pair<int, double>>> mp;
    while (cin){
        string name;
        int credit;
        double mark;
        cin >> name >> credit >> mark;
        if (name != "") mp[name].push_back({credit, mark});
    }
    for (auto it = mp.rbegin(); it != mp.rend(); it++){
        double totalMark = 0;
        int totalCredit = 0;
        for (auto i : it->second){
            totalCredit += i.first;
            totalMark += i.second * i.first;
        }
        cout << it->first << " : " << fixed << setprecision(2) << totalMark / totalCredit << endl;
    }
    return 0;
}