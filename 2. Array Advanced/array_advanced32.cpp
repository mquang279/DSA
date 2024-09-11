/*  [Mảng 1 Chiều Nâng Cao]. Bài 32. Maximum window
    Cho mảng A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là in ra số lớn nhất và nhỏ nhất của mọi mảng con cỡ
    K của mảng A[]
    
    Đầu vào
    Dòng đầu tiên là N và K
    Dòng thứ 2 gồm N phần tử A[i]
    Giới hạn
    1<=K<=N<=10^6
    0<=A[i]<=10^9
    Đầu ra
    In ra số lớn nhất và nhỏ nhất của mọi mảng con trên từng dòng.
    
    Ví dụ :
    Input 01
    8 2
    8 5 8 6 7 6 5 8
    Output 01
    5 8
    5 8
    6 8
    6 7
    6 7
    5 6
    5 8
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n], min_val = INT_MAX, max_val = INT_MIN;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i < k){
            min_val = min(a[i], min_val);
            max_val = max(a[i], max_val);
        }
    }
    cout << min_val << " " << max_val << endl;
    for (int i = k; i < n; i++){
        if (a[i - k] == min_val) min_val = *min_element(a + i - k + 1, a + i + 1);
        if (a[i - k] == max_val) max_val = *max_element(a + i - k + 1, a + i + 1);
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);
        cout << min_val << " " << max_val << endl;
    }
    return 0;
}