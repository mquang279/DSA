#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp, cnt0 = 0, cnt1 = 0;
    vector<int> length0;
    vector<int> length1;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp == 0){
            cnt0++;
            if (cnt1 != 0) length1.push_back(cnt1);
            cnt1 = 0;
        }
        else{
            cnt1++;
            if (cnt0 != 0) length0.push_back(cnt0);
            cnt0 = 0;
        }
    }
    if (cnt1 != 0) length1.push_back(cnt1);
    if (cnt0 != 0) length0.push_back(cnt0);
    for (int x : length1) cout << x << " ";
    cout << endl;
    for (int x : length0) cout << x << " ";
    return 0;
}