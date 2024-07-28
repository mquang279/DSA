#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string add(string num1, string num2){
    while (num1.length() < num2.length()) num1 = '0' + num1;
    while (num2.length() < num1.length()) num2 = '0' + num2;
    int du = 0;
    string res = "";
    for (int i = num1.length() - 1; i >= 0; i--){
        int sum = (num1[i] - '0') + (num2[i] - '0') + du;
        du = sum / 10;
        sum %= 10;
        res = to_string(sum) + res;
    }
    if (du != 0) res = to_string(du) + res;
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string num1, num2;
        cin >> num1 >> num2;
        cout << add(num1, num2) << endl;
    } 
    return 0;
}