#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    const int x = -9, y = 0, z = -500;
    cout << (x > y ? x > z ? x : z : y > z ? y : z);
    getch();
    return 0;
}