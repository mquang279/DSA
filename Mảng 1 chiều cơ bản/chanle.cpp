#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp, countEven = 0, sumEven = 0, totalSum = 0;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp % 2 == 0){
            countEven++;
            sumEven += tmp;
        }
        totalSum += tmp;
    }
    cout << countEven << endl;
    cout << n - countEven << endl;
    cout << sumEven << endl;
    cout << totalSum - sumEven << endl;
    return 0;
}