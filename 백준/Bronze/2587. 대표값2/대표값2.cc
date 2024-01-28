#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nums[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
        sum += nums[i];
    }

    int average = sum / 5;
    cout << average << endl;

    sort(nums, nums + 5);
    int median = nums[2];
    cout << median;

    return 0;
}
