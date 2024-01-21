#include <iostream>
#include <cmath>

int main() {
    while (true) {
        int N;
        std::cin >> N;

        if (N == -1) {
            break;
        }
        int* array = new int[N];
        int count = 0;
        int sum = 0;
        for (int i = 1; i < N; i++) {
            if (N % i == 0) {
                array[count] = i;
                sum += array[count];
                count++;
            }
        }if (sum == N) {
            std::cout << N << " = "; 
            for (int i = 0; i < count; i++) {
                if (i == count-1) {
                    std::cout << array[i];
                }else
                std::cout << array[i] << " + ";
            }
        }
        else
        {
            std::cout << N << " is NOT perfect.";
        }
        std::cout << std::endl;

        delete[] array;
    }
    return 0;
}
