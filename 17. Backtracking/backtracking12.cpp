/*
[Quay Lui - Nhánh Cận]. Bài 12. Subset sum
Cho mảng A[] gồm n phần tử, hãy xác định xem có thể chia mảng A[] thành 2 tập sao cho tổng của 2 tập bằng nhau hay không?

Đầu vào:
-Dòng đầu tiên là số nguyên n
-Dòng thứ 2 gồm n số nguyên của mảng A[]
Đầu ra:
-In ra 1 nếu có thể chia mảng thành 2 phần bằng nhau, ngược lại in 0.

Giới hạn:
1<=n<=20
1<=A[i]<=100

Input 01
5
9 9 4 4 5
Output 01
0
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, targetSum, currentSum;
int a[25];
bool check = false;
void Try(int i){
    if (currentSum == targetSum){
        check = true;
        return;
    }
    for (int j = i; j < n; j++){
        if (currentSum + a[j] <= targetSum){
            currentSum += a[j];
            Try(j + 1);
            currentSum -= a[j];
        }
        else break;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        targetSum += a[i];
    }
    sort(a, a + n);
    if (targetSum % 2 != 0){
        cout << 0;
        return 0;
    }
    targetSum /= 2;
    Try(0);
    if (check) cout << 1;
    else cout << 0;
    return 0;
}