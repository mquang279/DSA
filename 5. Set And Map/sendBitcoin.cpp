#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    unordered_map<string, string> mp;
    for (int i = 0; i < n; i++){
        string name;
        string walletID;
        getline(cin, name);
        cin >> walletID;
        cin.ignore();
        mp[walletID] = name;
    }
    int t;
    cin >> t;
    mp[""] = "Unknown wallet";
    for (int i = 0; i < t; i++){
        string senderID;
        string receiverID;
        int amount;
        cin >> senderID >> receiverID >> amount;
        if (mp.find(senderID) == mp.end()) senderID = "";
        if (mp.find(receiverID) == mp.end()) receiverID = "";
        cout << mp[senderID] << " send " << amount << " bitcoin to " + mp[receiverID] << endl;
    }
    return 0;
}
