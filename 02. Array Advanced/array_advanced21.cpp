/*  [Mảng 1 Chiều Nâng Cao]. Bài 21. Dãy ưu thế
    Cho dãy A[] chỉ bao gồm các số nguyên dương nhưng không biết trước số phần tử của dãy.
    Người ta gọi dãy A[] là dãy ưu thế nếu thỏa mãn 1 trong 2 điều kiện sau đây:
    Dãy gọi là ưu thế chẵn nếu số phần tử của dãy là chẵn và số lượng số chẵn trong dãy nhiều hơn số lượng số lẻ.
    Dãy gọi là ưu thế lẻ nếu số phần tử của dãy là lẻ và số lượng số lẻ trong dãy nhiều hơn số lượng số chẵn.
    
    Đầu vào
    1 dòng gồm số nguyên, các số cách nhau đúng một khoảng trắng, sau chữ số cuối cùng có thể có khoảng trắng.
    Giới hạn
    Số lượng phần tử trong dãy không quá 10^5
    1 ≤ A[i] ≤ 10^9
    Đầu ra
    In ra YES nếu dãy là dãy ưu thế, ngược lại in NO.
    
    Ví dụ :
    Input 01
    2 2 3 5 8 10 20 88
    Output 01
    YES
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int cnt = 0;
    int x, cntOdd = 0, cntEven = 0;
    while (cin >> x){
        cnt++;
        if (x % 2 == 0) cntEven++;
        else cntOdd++;
    }
    if ((cnt % 2 == 0 && cntEven > cntOdd) || (cnt % 2 == 1 && cntOdd > cntEven)) cout << "YES";
    else cout << "NO";
    return 0;
}