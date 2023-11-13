// Prokofev 44444.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main() 
{
    setlocale(0, "");
    int numbers[] = { 3, -1, 4, -2, 8, -5, 0, 7 };
    cout << "Положительные числа: ";
    for (int i = 0; i < 8; ++i) {
        if (numbers[i] > 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << "\nОтрицательные числа: ";
    for (int i = 0; i < 8; ++i) {
        if (numbers[i] < 0) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;

    return 0;
}