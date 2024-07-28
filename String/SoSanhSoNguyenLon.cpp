#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string number1, number2;
    cin >> number1 >> number2;
    while (number1.length() < number2.length()){
        number1 = "0" + number1;
    }
    while (number2.length() < number1.length()){
        number2 = "0" + number2;
    }
    for (int i = 0; i < number1.length(); i++){
        if (number1[i] < number2[i]){
            cout << "29tech";
            return 0;
        }
        else if (number1[i] > number2[i]){
            cout << "28tech";
            return 0;
        }
    }
    cout << "30tech";
    return 0;
}