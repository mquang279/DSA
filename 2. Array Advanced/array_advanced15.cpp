/*  [Mảng 1 Chiều Nâng Cao]. Bài 15. BRT SPOJ
    Thành phố X có N thị trấn trên trục đường chính. Tọa độ của các thị trấn lần lượt là a[1], a[2], ..., a[N],
    các tọa độ này là phân biệt, không có 2 tọa độ nào trùng nhau.
    Chính quyền thành phố muốn xây dựng một tuyến buýt nhanh BRT để kết nối 2 thị trấn gần nhau nhất với nhau.
    Bạn hãy tính thử xem chiều dài của tuyến buýt này bằng bao nhiêu? Và có bao nhiêu cặp thị trấn có tiềm năng
    giống nhau để xây dựng tuyến BRT này.
    Gợi ý : Sắp xếp và tìm khoảng cách giữa 2 thị trấn đứng cạnh nhau sẽ tìm được khoảng cách nhỏ nhất
    
    Đầu vào
    Dòng đầu tiên là số nguyên N (N ≤ 1000 000).
    Dòng tiếp theo gồm N số nguyên A[i]
    Giới hạn
    N ≤ 1000 000
    -10^9 ≤ A[i] ≤ 10^9
    Đầu ra
    In ra 2 số nguyên lần lượt là khoảng cách ngắn nhất giữa 2 thị trấn, và số lượng cặp thị trấn có cùng khoảng
    cách ngắn nhất này.

    Ví dụ :
    Input 01
    4
    6 -3 0 4
    Output 01
    2 1
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
    for (int &x : a) cin >> x;
    sort(a, a + n);
    int minDist = INT_MAX, cnt = 1;
    for (int i = 1; i < n; i++){
        if (a[i] - a[i - 1] == minDist) cnt++;
        else if (a[i] - a[i - 1] < minDist){
            minDist = a[i] - a[i - 1];
            cnt = 1;
        }
    }
    cout << minDist << " " << cnt;
    return 0;
}