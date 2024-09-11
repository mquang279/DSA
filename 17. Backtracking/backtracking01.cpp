/*
[Quay Lui - Nhánh Cận]. Bài 1. Tập hợp có tổng bằng S
Xét tất cả các tập hợp các số nguyên dương có các phần tử khác nhau và không lớn hơn số n cho trước. 
Nhiệm vụ của bạn là hãy đếm xem có tất cả bao nhiêu tập hợp có số lượng phần tử bằng k và tổng của 
tất cả các phần tử trong tập hợp bằng s? Các tập hợp là hoán vị của nhau chỉ được tính là một.
Ví dụ với n = 9, k = 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.

Đầu vào:
1 dòng gồm 3 số nguyên n, k, s
Đầu ra:
-In ra đáp án của bài toán

Giới hạn:
1 ≤ n ≤ 20
1 ≤ k ≤ 10
1 ≤ s ≤ 155

Input 01:
16 8 91
Output 01:
28
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k, target, cnt;
int a[12];

bool equal(){
    int sum = 0;
    for (int i = 1; i <= k; i++){
        sum += a[i];
    }
    return sum == target;
}

void Try(int i){
    for (int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if (i == k){
            if (equal()) cnt++;
        }
        else Try(i + 1);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k >> target;
    Try(1); 
    cout << cnt;
    return 0;
}