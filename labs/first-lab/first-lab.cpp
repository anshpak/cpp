// first-lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "house.h"
#include <string>
#include <ctime>

int main()
{
    srand(time(NULL));
    const int house_flats_amount = 10;
    const string house_address = "Oktyabrskaya/" + (to_string(rand() % 9 + 1) + "/");
    House flats[house_flats_amount];
    for (int i = 0; i < house_flats_amount; i++) {
        flats[i] = House(house_address + to_string(i + 1), i + 1, rand() % 10 + 1, rand() % 100 + 20);
    }
    for (int i = 0; i < house_flats_amount; i++) {
        // cout << i << endl;
        flats[i].show();
    }
    /*House h = House("Armeyskaya/21", 4, 3, 50);
    cout << h.get_address() << endl;
    cout << h.get_fl_num() << endl;
    cout << h.get_rooms_amount() << endl;
    cout << h.get_area() << endl;
    h.show();
    */
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
