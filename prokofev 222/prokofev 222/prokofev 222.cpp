// prokofev 222.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int toDecimal(string num, int base){
    int decimal = 0;
    int power = 0;
    int size = num.size();

    for (int i = size - 1; i >= 0; --i) {
        char digit = num[i];
        int value;

        if (isdigit(digit)) {
            value = digit - '0';
        }
        else {
            value = digit - 'A' + 10;
        }

        decimal += value * pow(base, power);
        ++power;
    }

    return decimal;
}


string fromDecimal(int decimal, int base) {
    string result = "";

    while (decimal > 0) {
        int remainder = decimal % base;
        char digit;

        if (remainder < 10) {
            digit = remainder + '0';
        }
        else {
            digit = remainder - 10 + 'A'; 
        }

        result = digit + result;
        decimal /= base;
    }

    return result;
}

int main() 
{
    setlocale(0, "");
    string num;
    int fromBase, toBase;

    cout << "Введите число: ";
    cin >> num;
    cout << "Введите систему счисления исходного числа: ";
    cin >> fromBase;
    cout << "Введите систему счисления, в которую нужно перевести число: ";
    cin >> toBase;

    int decimal = toDecimal(num, fromBase);

    string result = fromDecimal(decimal, toBase);

    cout << num << " в " << fromBase << "-й системе счисления равно " << result << " в " << toBase << "-й системе счисления." << endl;

    return 0;
}