/*  [Mảng 1 Chiều Nâng Cao]. Bài 20. Sliding window
    Cho dãy số A[] gồm có N phần tử và số nguyên dương k. Hãy tìm dãy con liên tiếp có k phần tử sao cho dãy con
    đó có tổng các phần tử lớn nhất.
    Đầu vào
    Dòng đầu tiên là số nguyên N và K.
    Dòng tiếp theo gồm N số nguyên A[i]
    Giới hạn
    1 ≤ K ≤ N ≤ 10^7
    1 ≤ A[i] ≤ 10^9
    Đầu ra
    Dòng 1 in ra tổng lớn nhất của dãy con K phần tử liền kề.
    Dòng 2 in ra dãy con đó, nếu có nhiều dãy con có cùng tổng lớn nhất thì in ra dãy con xuất hiện đầu tiên.
    Ví dụ :
    Input 01
    9 3
    1 2 3 7 8 9 1 2 9
    Output 01
    24
    7 8 9
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    ll sum = 0, maxSum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i < k) sum += 1ll * a[i];
    }
    int pos = 0;
    maxSum = sum;
    for (int i = k; i < n; i++){
        sum = sum + a[i] - a[i - k];
        if (sum > maxSum){
            maxSum = sum;
            pos = i - k + 1;
        }
    }
    cout << maxSum << endl;
    for (int i = pos; i < pos + k; i++) cout << a[i] << " ";
    return 0;
}