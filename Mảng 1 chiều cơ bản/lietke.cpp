#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

bool isPalindrome(int a){
    string s = to_string(a);
    string tmp = s;
    reverse(s.begin(), s.end());
    return s == tmp;
}

bool isSquare(int a){
    int tmp = sqrt(a);
    return tmp * tmp == a;
}

int digitSum(int a){
    int res = 0;
    while (a != 0){
        res += a % 10;
        a /= 10;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (isPrime(tmp)) cnt1++;
        if (isPalindrome(tmp)) cnt2++;
        if (isSquare(tmp)) cnt3++;
        if (isPrime(digitSum(tmp))) cnt4++;
    }
    cout << cnt1 << endl;
    cout << cnt2 << endl;
    cout << cnt3 << endl;
    cout << cnt4;
    return 0;
}