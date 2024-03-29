#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int arr[3]; 
    int num[7] = { 0 }; 
    int money = 0;
    int maxFreq = 0; 
    int maxValue = 0; 

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        num[arr[i]]++;
        if (num[arr[i]] > maxFreq) {
            maxFreq = num[arr[i]];
            maxValue = arr[i];
        }
    }

 
    switch (maxFreq) {
    case 1:
        money = 100 * (*max_element(arr, arr + 3));
        break;
    case 2:
        money = 1000 + maxValue * 100;
        break;
    case 3:
        money = 10000 + maxValue * 1000;
        break;
    default:
        break;
    }

    cout << money;

    return 0;
}
