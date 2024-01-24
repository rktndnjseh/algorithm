#include <iostream>
using namespace std;

int main() {
    int Ax, Ay;
    int Bx, By;
    int Cx, Cy;
    int Dx, Dy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

    if (Ax == Bx) Dx = Cx;
    else if (Ax == Cx) Dx = Bx;
    else Dx = Ax;

    if (Ay == By) Dy = Cy;
    else if (Ay == Cy) Dy = By;
    else Dy = Ay;

    cout << Dx << ' ' << Dy;

    return 0;
}
