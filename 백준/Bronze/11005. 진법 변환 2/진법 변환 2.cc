#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>

void decToBin(int num, int base) {
    std::stack<char> binStack;

    while (num > 0) {
        int remainder = num % base;
        char digit = (remainder < 10) ? remainder + '0'
            //숫자
            : remainder - 10 + 'A';
            //A로 시작되는 알파벳
        binStack.push(digit);
        num = num / base;
    }

    while (!binStack.empty()) {
        std::cout << binStack.top();
        binStack.pop();
    }
}

int main() {
    int decNum, base;

    std::cin >> decNum >> base;
    std::cout ;
    decToBin(decNum, base);
    return 0;
}
