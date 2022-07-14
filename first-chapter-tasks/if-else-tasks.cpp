#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    const int x = 9, y = 0;
    int mult;

    cout << (x > y ? "+++" : "---");
    //x > y ? cout<<"+++" : cout<<"---";
    //or through if else

    //mult = x > 0 ? x * x : 100;
    //x > 0 ? mult = x * x : mult = 100;
    //cout << endl << mult;
    cout << endl << (x > y ? x * x : 100);

    getch();
    return 0;
}