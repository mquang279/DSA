/*  [Mảng 1 Chiều Nâng Cao]. Bài 27. Số thao tác giúp mảng tăng dần 2
    Cho dãy số A[] gồm có N phần tử. Ở mỗi thao tác bạn có thể tăng các phần tử trong mảng lên 1 lượng là d đơn vị,
    hãy xác định số thao tác tối thiểu sao cho mảng trở thành một dãy tăng chặt. Ví dụ dãy 1 2 3 7 8 là một dãy tăng
    chặt, nhưng dãy 1 2 2 7 8 không phải là một dãy tăng chặt. Ví dụ với mảng ban đầu là 1 3 3 2 và d = 2, ta cần
    thực hiện thao tác thứ nhất thêm d vào phần tử thứ 3 trong mảng, mảng trở thành 1 3 5 2, ta tiếp thục thực hiện
    2 thao tác thêm d vào phần tử thứ 4, mảng trở thành dãy tăng chặt là 1 3 5 6
    
    Đầu vào
    Dòng đầu tiên là số nguyên N và số d.
    Dòng tiếp theo gồm N số nguyên A[i]
    Giới hạn
    1 ≤ N, d ≤ 10^4
    0 ≤ A[i] ≤ 10^6
    Đầu ra
    In ra số thao tác tối thiểu cần thực hiện để biến mảng thành dãy tăng chặt.
    
    Ví dụ :
    Input 01
    3 3
    15 17 9
    Output 01
    3
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, d;
    cin >> n >> d;
    int a[n];
    for (int &x : a) cin >> x;
    ll res = 0;
    for (int i = 1; i < n; i++){
        if (a[i] <= a[i - 1]){
            // Tìm số gần a[i - 1] - a[i] + d chia hết cho d
            int tmp = (a[i - 1] - a[i] + d) / d;
            res += tmp;
            a[i] += d * tmp;
        }
    }
    cout << res;
    return 0;
}