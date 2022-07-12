#include <iostream>
#include <conio.h>

int main() {
    int a, b, r;
    std::cout<<"The first number: ";
    std::cin>>a;
    std::cout<<"The second number: ";
    std::cin>>b;
    std::cout<<"Result of ";
    if(a > 0 && b > 0) {
        r = a * b;
        std::cout << "multiplication: ";
    }
    else {
        r = a + b;
        std::cout<<"sum: ";
    }
    std::cout<<r;
    getch();
    return 0;
}