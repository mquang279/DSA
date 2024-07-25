#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    string studentID;
    string studentName;
    unordered_map<string, string> mp;
    for (int i = 0; i < n; i++){
        cin >> studentID;
        cin.ignore();
        getline(cin, studentName);
        mp[studentID] = studentName;
    }
    int t;
    cin >> t;
    while (t--){
        cin >> studentID;
        if (mp.find(studentID) != mp.end()) cout << mp[studentID] << endl;
        else cout << "NOT FOUND" << endl;
    }
    return 0;
}