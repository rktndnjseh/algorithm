#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int side[3];
    
    string result;
    while (true) {
        int side_cnt[1001] = { 0 };
        int count = 0;
        int max_side = 0;

        for (int i = 0; i < 3; i++) {
            cin >> side[i];
            side_cnt[side[i]]++;
            if (side[i] == 0) {
                count++;
            }
            max_side = max(max_side, side[i]); 
        }
        if (count == 3) {
            break;
        }
        int sum = side[0] + side[1] + side[2] - max_side;
        if (max_side < sum) {
            if (side_cnt[side[0]] == 3) {
                result = "Equilateral";
            }
            else if (side_cnt[side[0]] == 2 || side_cnt[side[1]] == 2 || side_cnt[side[2]] == 2) {
                result = "Isosceles";
            }
            else {
                result = "Scalene";
            }
        }
        else {
            result = "Invalid";
        }

        cout << result << endl;

        for (int i = 0; i < 3; i++) {
            side[i] = 0;
            side_cnt[side[i]] = 0;
        }
    }
    return 0;
}
