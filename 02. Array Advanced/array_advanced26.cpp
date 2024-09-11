/*  [Mảng 1 Chiều Nâng Cao]. Bài 26. Số thao tác giúp mảng tăng dần
    Cho dãy số A[] gồm có N phần tử. Ở mỗi thao tác bạn có thể tăng các phần tử trong mảng lên 1 vài đơn vị, hãy xác
    định số đơn vị tối thiểu cần thêm vào các phần tử trong mảng sao cho mảng trở thành một dãy tăng chặt. Ví dụ dãy
    1 2 3 7 8 là một dãy tăng chặt, nhưng dãy 1 2 2 7 8 không phải là một dãy tăng chặt.
    
    Đầu vào
    Dòng đầu tiên là số nguyên N.
    Dòng tiếp theo gồm N số nguyên A[i]
    Giới hạn
    1 ≤ N ≤ 10^6
    0 ≤ A[i] ≤ 10^6
    Đầu ra
    In ra số đơn vị tối thiểu cần thêm vào các phần tử trong mảng để dãy tăng chặt.
    
    Ví dụ :
    Input 01
    5
    3 2 7 8 1
    Output 01
    10
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    ll res = 0;
    for (int &x : a) cin >> x;
    for (int i = 1; i < n; i++){
        if (a[i] <= a[i - 1]){
            res += a[i - 1] + 1 - a[i];
            a[i] = a[i - 1] + 1;
        }
    }
    cout << res;
    return 0;
}