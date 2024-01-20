#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

int main()
{
    //найти объем шара радуса R и площадь его поверхности
    setlocale(LC_ALL, "rus");
    double r;
    std::cout << "Введите радиус сферы\n";
    std::cin >> r;
    double vol = 3.0 / 4.0 * M_PI * r;
    double area = 4 * M_PI * pow(r,2);
    std::cout << "Объем: " << vol << std::endl << "Площадь: " << area;
}
