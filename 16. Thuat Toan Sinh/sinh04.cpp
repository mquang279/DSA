/*
    [Thuật Toán Sinh]. Bài 4. Xâu nhị phân AB
    Cho số nguyên dương N, bạn hãy in ra các xâu gồm N kí tự 'A' và 'B' theo thứ tự từ điển giảm dần.

    Đầu vào:
    -Dòng duy nhất chứa số nguyên dương N
    Đầu ra:
    -In ra các xâu nhị phân thỏa mãn

    Giới hạn:
    1<=N<=20

    Input 01:
    3
    Output 01:
    BBB
    BBA
    BAB
    BAA
    ABB
    ABA
    AAB
    AAA
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check = true;
char a[21];
int n;

void sinh(){
    int i = n - 1;
    while (i >= 0 && a[i] == 'A'){
        a[i] = 'B';
        i--;
    }
    if (i < 0){
        check = false;
        return;
    }
    a[i] = 'A';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        a[i] = 'B';
    }
    while (check){
        for (int i = 0; i < n; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}