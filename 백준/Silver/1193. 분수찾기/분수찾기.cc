#include <iostream>

int main() {
    int X;
    std::cin >> X;

    int line = 1;
    while (X > line) {
        X -= line;
        line++;
    }

    int a = (line % 2 == 0) ? X : line - X + 1;
    int b = (line % 2 == 0) ? line - X + 1 : X;

    std::cout << a << "/" << b;

    return 0;
}
