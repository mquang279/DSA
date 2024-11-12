#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, maxWeight;
int weight[20], value[20];
ll res;
string s;

void Try(){
    if (s.length() == 19){
        ll currentWeight = 0, currentValue = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '1'){
                currentWeight += weight[i];
                currentValue += value[i];
            }   
            if (currentWeight > maxWeight) return;
        }
        res = max(res, currentValue);
        return;
    }
    s += '0';
    Try();
    s.pop_back();
    s += '1';
    Try();
    s.pop_back();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> maxWeight;
    for (int i = 0; i < n; i++) cin >> weight[i];
    for (int i = 0; i < n; i++) cin >> value[i];
    Try();
    cout << res;
    return 0;
}