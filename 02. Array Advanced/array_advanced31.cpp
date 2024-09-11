/*  [Mảng 1 Chiều Nâng Cao]. Bài 31. Maximum pair
    Cho mảng A[] gồm N phần tử, hãy tìm 2 chỉ số i, j khác nhau sao cho 0 <= i < j < N và giá trị tuyệt đối tổng của
    2 phần tử A[i] và A[j] đạt giá trị lớn nhất.
    
    Đầu vào
    Dòng đầu tiên là số nguyên N.
    Dòng tiếp theo gồm N số nguyên A[i]
    Giới hạn
    2<=N<=10^6
    -10^9<=A[i]<=10^9
    Đầu ra
    In ra đáp án của bài toán
    
    Ví dụ :
    Input 01
    5
    -1 -2 -3 9 -5
    Output 01
    8
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], max1 = INT_MIN, max2 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;
    for (int &x : a){
        cin >> x;
        if (x > max1){
            max2 = max1;
            max1 = x;
        }
        else if (x > max2) max2 = x;
        if (x < min1){
            min2 = min1;
            min1 = x;
        }
        else if (x < min2) min2 = x;
    }
    cout << max(abs(min1 + min2), abs(max1 + max2));
    return 0;
}