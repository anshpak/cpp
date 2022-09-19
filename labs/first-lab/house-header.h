// объ€вление класса и функций
// функции определ€ю в house.cpp
#ifndef HOUSE-HEADER_H // предотвращение многократного включени€
#define HOUSE-HEADER_H // заголовочного файла
/* #ifndef и #endif - директивы препроцессора, которые предотвращают многократное включение кода, расположенного между ними.
≈сли загловок еще не включалс€ в файл, то им€ HOUSE-HEADER_H определ€етс€ директивой #define.
*/

struct floor {
	int rooms_amount;
	int area;
};

class House {
	char address[30];
	int fl_num;
	floor fl;
};

#endif