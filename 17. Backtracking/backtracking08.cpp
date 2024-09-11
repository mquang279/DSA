/*
[Quay Lui - Nhánh Cận]. Bài 8. Chia mảng
Cho mảng các số nguyên A[] gồm N phần tử. Hãy chia mảng số nguyên A[] thành K tập con khác 
rỗng sao cho tổng các phần tử của mỗi tập con đều bằng nhau. Mỗi phần tử thuộc tập con xuất 
hiện duy nhất một lần trong tất cả các tập con.
Ví dụ với A[] = {2, 1, 4, 5, 6}, K =3 ta có kết quả {2, 4}, {1, 5}, {6}.

Đầu vào:
-Dòng thứ nhất là hai số N và K
-Dòng tiếp theo đưa vào N số của mảng A[]
Đầu ra:
-Đưa ra 1 nếu có thể chia tập con thành K tập thỏa mãn yêu cầu bài toán, ngược lại đưa ra 0

Giới hạn:
1≤N, K≤20
0≤A[i]≤1000

Input 01
5 3
1 2 4 5 6
Output 01
1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k, targetSum, sum;
int a[100], visited[100];
int cnt = 0;

void Try(int i, int start){
    if (i >= n) return;
    //Chạy qua tất cả các giá trị có thể thêm được vào tập thứ i
    for (int j = start; j < n; j++){
        //Nếu giá trị a[j] chưa được thêm vào tập hiện tại hoặc các tập trước
        if (visited[j] == 0 && sum + a[j] <= targetSum){
            visited[j] = 1;
            sum += a[j];
            //Nếu tổng = targetSum thì chuyển sang tìm tập mới
            if (sum == targetSum){
                Try(i + 1, 0);
                cnt++;
            } //Nếu tổng < targetSum thì tiếp tục tìm những giá trị tiếp theo để thêm vào tập.
            else if (sum < targetSum){
                Try(i, j + 1);
            }
            visited[j] = 0;
            sum -= a[j];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        targetSum += a[i];
    }
    if (targetSum % k != 0){
        cout << 0;
        return 0;
    }
    targetSum /= k;
    Try(0, 0);
    if (cnt == k) cout << 1;
    else cout << 0;
    return 0;
}