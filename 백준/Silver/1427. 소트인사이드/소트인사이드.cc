#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    vector<int> numbers;
    for (int i = 0; i < line.length(); i++) {
        if (isdigit(line[i])) {
            int number = line[i] - '0';
            numbers.push_back(number);
        }
    }
    
    int maxNumber = *max_element(numbers.begin(), numbers.end());
    vector<int> array(maxNumber + 1, 0);
    
    for (int i = 0; i < numbers.size(); i++) {
        array[numbers[i]]++;
    }
    
    for (int i = maxNumber; i >= 0; i--) {
        for (int j = 0; j < array[i]; j++) {
            cout << i;
        }
    }

    return 0;

    return 0;
}