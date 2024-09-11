/*
[Mảng 1 Chiều Nâng Cao]. Bài 6. Đếm cặp số nguyên tố cùng nhau
Cho một dãy số nguyên dương có n phần tử. Hãy đếm các cặp số nguyên tố cùng nhau trong mảng.

Đầu vào:
-Dòng đầu tiên là số lượng phần tử trong mảng n.
-Dòng thứ 2 là các phần tử a[i] trong mảng.
Đầu ra:
-In ra số lượng cặp số nguyên tố cùng nhau trong mảng.

Input 01:
5
2 4 8 3 6
Output 01:
3
Giải thích : Các cặp số nguyên tố cùng nhau là : (2, 3), (3, 4), (3, 8)
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], cnt = 0;
    for (int &x : a) cin >> x;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int tmp = gcd(a[i], a[j]);
            if (tmp == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}