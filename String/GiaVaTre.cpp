#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int isNum1Greater(string number1, string number2){
    for (int i = 0; i < number1.length(); i++){
        if (number1[i] < number2[i]){
            return -1;
        }
        else if (number1[i] > number2[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string date1, date2;
    cin >> date1 >> date2;
    vector<string> v1, v2;
    stringstream ss1(date1);
    string word;
    while (getline(ss1, word, '/')){
        v1.push_back(word);
    }
    stringstream ss2(date2);
    while (getline(ss2, word, '/')){
        v2.push_back(word);
    }
    for (int i = v1.size() - 1; i >= 0; i--){
        if (isNum1Greater(v1[i], v2[i]) == -1){
            cout << "28tech";
            return 0;
        }
        else if (isNum1Greater(v1[i], v2[i]) == 1){
            cout << "29tech";
            return 0;
        }
    }
    cout << "30tech";
    return 0;
}