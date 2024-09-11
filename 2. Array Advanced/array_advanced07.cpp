/*
[Mảng 1 Chiều Nâng Cao]. Bài 7. Sắp xếp chẵn lẻ
Cho một mảng các số nguyên, sắp xếp các phần tử trong mảng sao cho, các phần tử lẻ đứng trước 
và giảm dần, các phần tử chẵn đứng sau và tăng dần. Xem thêm ví dụ để hiểu rõ hơn yêu cầu.

Đầu vào:
-Dòng đầu tiên là số lượng phần tử trong mảng.
-Dòng thứ 2 là N phần tử trong mảng.

Đầu ra:
-In ra dãy đã được sắp xếp.

Input 01:
10
1 2 3 9 7 4 8 6 10 5
Output 01:
9 7 5 3 1 2 4 6 8 10
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    vector<int> oddNum, evenNum;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp % 2 == 0) evenNum.push_back(tmp);
        else oddNum.push_back(tmp);
    }
    sort(oddNum.begin(), oddNum.end(), __greater());
    sort(evenNum.begin(), evenNum.end());
    for (int x : oddNum) cout << x << " ";
    for (int x : evenNum) cout << x << " ";
    return 0;
}