/*
    [Mảng 1 Chiều Nâng Cao]. Bài 1. Các bài toán cơ bản
    Cho mảng số nguyên gồm N phần tử. Thực hiện in ra các yêu cầu sau đây. (Bài này đúng là được nhé mọi người, TLE không sao cả vì test to quá)

    Đầu vào:
    -Dòng đầu tiên là số lượng phần tử trong mảng.
    -Dòng thứ 2 là N phần tử trong mảng.
    Đầu ra:
    -Dòng đầu tiên ghi số lớn nhất trong mảng kèm theo vị trí của nó (bắt đầu từ 0), 
    nếu có nhiều số cùng có giá trị lớn nhất thì lấy vị trí xuất hiện đầu tiên.
    -Dòng thứ 2 ghi số nhỏ nhất trong mảng kèm theo vị trí của nó (bắt đầu từ 0), 
    nếu có nhiều số cùng có giá trị nhỏ nhất thì lấy vị trí xuất hiện cuối cùng. 
    -Dòng thứ 3 ghi ra số lượng số nguyên tố xuất hiện trong dãy.
    -Dòng thứ 4 ghi ra tích lớn nhất của 2 số trong mảng (2 số khi nhân với nhau tạo ra tích lớn nhất).
    -Dòng thứ 5 in ra YES nếu mảng đối xứng, ngược lại in ra NO.
    -Dòng thứ 6 tính tích các số trong mảng, kết quả lấy dư với (10^9+7)

    Giới hạn:
    2≤n≤10^6
    -10^9≤ai≤10^9
    
    Input 01:
    6
    -10 -10 2 3 4 5
    Output 01:
    5 5
    -10 1
    3
    100
    NO
    12000
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod = 1e9 + 7;

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

bool isPalindrome(int a[], int n){
    for (int i = 0; i < n / 2; i++){
        if (a[i] != a[n - i - 1]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    int max_val = INT_MIN, min_val = INT_MAX, primeCount = 0;
    for (int &x : a){
        cin >> x;
        
        max_val = max(max_val, x);
        min_val = min(min_val, x);
        if (isPrime(x)) primeCount++;
    }
    for (int i = 0; i < n; i++){
        if (a[i] == max_val){
            cout << max_val << " " << i << endl;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--){
        if (a[i] == min_val){
            cout << min_val << " " << i << endl;
            break;
        }
    }
    cout << primeCount << endl;
    int b[n];
    for (int i = 0; i < n; i++) b[i] = a[i];
    sort(b, b + n);
    cout << max(b[0] * b[1], b[n - 1] * b[n - 2]) << endl;
    if (isPalindrome(a, n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    ll tich = 1;
    for (int x : a){
        tich = ((tich % mod) * (x % mod)) % mod;
    }
    cout << tich << endl;
    return 0;
}