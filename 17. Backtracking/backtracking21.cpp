/*
[Quay Lui - Nhánh Cận]. Bài 21. Generate word
Cho một bảng HCN cỡ N hàng, M cột, mỗi ô trên HCN chứa 1 chữ cái in hoa hoặc chữ số. 
Một từ có thể được xây dựng từ các chữ cái của các ô liền kề theo thứ tự, trong đó các 
ô liền kề nằm cạnh nhau theo chiều ngang hoặc chiều dọc. Không được sử dụng cùng một ô 
chữ cái nhiều lần. Bạn hãy xác định xem có thể tạo thành từ S cho trước hay không ?

Đầu vào:
• Dòng đầu tiên là N và M
• N dòng tiếp theo mô tả bảng HCN
• Dòng cuối cùng là từ S
Đầu ra:
• In ra YES nếu có thể tạo được từ S, ngược lại in NO

Giới hạn:
• 1<=N,M<=5
• 1<=len(S)<=25

Input 01:
4 4
ACAC
28B5
1TE5
ABCH
28TECH
Output 01:
YES
*/


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m;
char a[10][10];
string targetWord, currentWord;
bool check = false;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

bool isValid(int i, int j){
    return i >= 0 && j >= 0 && i < n && j < m && currentWord[currentWord.length() - 1] == targetWord[currentWord.length() - 1];
}

void Try(int i, int j){
    currentWord += a[i][j];
    a[i][j] = '@';
    if (currentWord == targetWord){
        check = true;
        return;
    }
    for (int k = 0; k < 4; k++){
        int newX = i + dx[k];
        int newY = j + dy[k];
        if (isValid(newX, newY)){
            Try(newX, newY);
        }
    }
    a[i][j] = currentWord[currentWord.length() - 1];
    currentWord.pop_back();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    cin >> targetWord;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == targetWord[0]){
                Try(i, j);
                if (check){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}