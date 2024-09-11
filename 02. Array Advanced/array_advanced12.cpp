/*  [Mảng 1 Chiều Nâng Cao]. Bài 12. Đếm tần suất nguyên tố
    Cho một dãy số nguyên chưa biết trước số lượng phần tử, hãy đếm tần xuất hiện của các số nguyên tố trong dãy
    và in ra theo thứ tự xuất hiện trong dãy
    
    Đầu vào
    Gồm nhiều dòng chưa các số nguyên trong dãy
    Giới hạn
    Dãy không quá 10000 số nguyên không âm.
    Các số trong dãy là số nguyên không âm không quá 10^9
    Đầu ra
    In ra các số nguyên tố trong dãy kèm theo tần suất của nó.
    
    Ví dụ :
    Input 01
    2 3 5 3 2 5 1
    Output 01
    2 2
    3 2
    5 2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int x;
    vector<int> v;
    map<int, int> mp;
    while (cin >> x){
        v.push_back(x);
        if (isPrime(x)) mp[x]++;
    }
    for (int x : v){
        if (mp[x] != 0){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}