/*Шипулин Иван - ИВТ-12М
Вариант 22 - Опишите функцию вычисления котангенса, 
обработайте ошибку вычисления котангенса при аргументе,
синус которого равен 0.*/
#include <iostream>
#include <conio.h>
#include <math.h>
#define M_PI       3.14159265358979323846

using namespace std;

int main()
{
    double s, c, ctg, x, z;

    setlocale(0, "russian");
    cout << "Введите градусную меру sin - : "; cin >> x;

    s = sin(x * M_PI / 180.0);

    cout << s << endl;

    cout << "Введите градусную меру cos - : "; cin >> z;

    c = cos(x * M_PI / 180.0);

    cout << c << endl;

    try
    {

        if (s == 0)
            throw "Sin не может быть равен 0";

        std::cout << "Котангенс =  " << c / s << '\n';
    }
    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << '\n';
    }
}