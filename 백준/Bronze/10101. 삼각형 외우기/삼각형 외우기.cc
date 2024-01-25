#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int angle[3];
    int sum = 0;
    int count = 0;
    int angle_cnt[1001] = { 0 };
    string resultMessage;
    for (int i = 0; i < 3; i++) {
        cin >> angle[i];
        sum += angle[i];
        angle_cnt[angle[i]]++;
    }
    for (int i = 0; i < 3; i++) {
        if (angle[i] == 60) {
            count++;
        }
        if (sum == 180)
        {
            if (angle_cnt[angle[i]] == 2) {
                resultMessage = "Isosceles";
        }else if (angle_cnt[angle[i]] == 1) {
                    resultMessage = "Scalene";
            }
        }
        else {
            resultMessage = "Error";
        }

    }
    if (count == 3) cout << "Equilateral";
    else {
        cout << resultMessage;
    }

    return 0;
}
