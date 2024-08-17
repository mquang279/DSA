#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int current25 = 0, current50 = 0, customerMoney;
    for (int i = 0; i < n; i++){
        cin >> customerMoney;
        if (customerMoney == 50){
            current25--;
            current50++;
        }
        else if (customerMoney == 100){
            if (current50 >= 1 && current25 >= 1){
                current50--;
                current25--;
            }
            else{
                current25 -= 3;
            }
        }
        else current25++;
        if (current25 < 0 || current50 < 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}