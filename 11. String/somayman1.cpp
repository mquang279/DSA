#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    int a = 0;
    for (char x : s) a += x - '0';
    while (a > 9){
        int tmp = a, check = 0;
        while (tmp != 0){
            check += tmp % 10;
            tmp /= 10;
        }
        a = check;
    }
    if (a == 9){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}