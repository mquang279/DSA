#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void addZero(string &num) {
    while (num.length() < 6) {
        num = '0' + num;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string userNum;
    cin >> userNum;
    addZero(userNum);
    srand(time(0));
    int randomNum = rand() % 1000000;
    string lotteryNum = to_string(randomNum);
    addZero(lotteryNum);
    cout << lotteryNum << endl;
    int countDigits = 0;
    for (int i = 5; i >= 0; i--) {
        if (userNum[i] == lotteryNum[i]) {
            countDigits++;
        } else {
            break;
        }
    }
    if (countDigits == 6) {
        cout << "Trung giai dac biet 3 ty";
    } else if (countDigits == 5) {
        cout << "Trung giai nhat 200 trieu";
    } else if (countDigits == 4) {
        cout << "Trung giai nhi 100 trieu";
    } else if (countDigits == 3) {
        cout << "Trung giai ba 10 trieu";
    } else if (countDigits == 2) {
        cout << "Trung giai khuyen khich 500k";
    } else {
        cout << "Khong trung giai";
    }
    return 0;
}