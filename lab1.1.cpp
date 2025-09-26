#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");

                                /*индивидуальное домашнее задание!!!!*/
            /*Циклический сдвиг влево.Реализуйте циклический сдвиг всех битов числа на 3 позиции влево.*/

    /*int value = 124;
    int order = sizeof(int) * 8;
    unsigned int mask = 1 << (order - 1);
    int shiftVal = (value << 3) | (value >> (order - 3));
    cout << "десятичное представление: " << value << endl;
    cout << "двоичное представление: " << " ";
    for (int i = 0; i < order; i++) {
        if (value & (mask >> i)) {
            cout << "1";
        }
        else {
            cout << "0";
        }
    }
    cout << endl;
    cout << "после циклического сдвига на 3 позиции влево:" << endl;
    cout << "десятичное представление: " << shiftVal << endl;
    cout << "двоичное представление:" << " ";
    for (int i = 0; i < order; i++) {
        if (shiftVal & (mask >> i)) {
            cout << "1";
        }
        else {
            cout << "0";
        }
    }*/

                                 /*номер раз*/

    /*cout << "размеры типов данных в байтах" << endl;
    cout << "int: " << sizeof(int) << " байт" << endl;
    cout << "short int: " << sizeof(short int) << " байт" << endl;
    cout << "long int: " << sizeof(long int) << " байт" << endl;
    cout << "float: " << sizeof(float) << " байт" << endl;
    cout << "double: " << sizeof(double) << " байт" << endl;
    cout << "long double: " << sizeof(long double) << " байт" << endl;
    cout << "char: " << sizeof(char) << " байт" << endl;
    cout << "bool: " << sizeof(bool) << " байт" << endl;*/

                                 /*номер два*/

    /*int value = -1;
    int order = sizeof(int) * 8;
    unsigned int mask = 1 << (order - 1);
    cout << "десятичное представление: " << value << endl;
    cout << "двоичное представление:" << " ";
    for (int i = 0; i < order; i++) {
        if (value & (mask >> i)) {
            cout << "1";
        }
        else {
            cout << "0";
        }
        if (i == 0) {
            cout << " ";
        }
        else if (i % 8 == 0) {
            cout << " ";
        }
    }*/

                                /*номер три*/

    /*union {
        int Ivalue;
        float Fvalue;
    };
    cout << "вводи номер:  ";
    cin >> Fvalue;
    cout << "з  порядок      мантисса" << endl;
    for (int i = 31; i >= 0; i--) {
        if (Ivalue & (1 << i)) {
            cout << "1";
        }
        else {
            cout << "0";
        }
        if (i == 31) cout << " ";
        if (i == 23) cout << " ";
    }*/

                               /*номер четыре*/

    /*union {
        uint64_t Ivalue;
        double Dvalue;
    };
    cout << "вводи номер:  ";
    cin >> Dvalue;
    cout << "з  порядок      мантисса" << endl;
    for (int i = 63; i >= 0; i--) {
        if (Ivalue & (1LL << i)) {
            cout << "1";
        }
        else {
            cout << "0";
        }
        if (i == 63) cout << " ";
        if (i == 52) cout << " ";
    }*/

                              /*номер пять флот*/

    /*union {
        int intVal;
        float floatVal;
    };
    int bitNum, newBitVal, bitVal, newVal;
    unsigned int key, reversedKey;
    cout << "вводи число: ";
    cin >> floatVal;
    cout << "выбирай номер бита: ";
    cin >> bitNum;
    if (bitNum > 32) {
        cout << ("извиняй слишком много( ");
        exit(0);
    }
    cout << "на что меняем (1 или 0): ";
    cin >> newBitVal;;
    cout << "og value: " << intVal << endl;
    key = 1;
    key = key << (bitNum - 1);
    reversedKey = ~key;
    if ((intVal & reversedKey) == intVal) {
        bitVal = 0;
    }
    else {
        bitVal = 1;
    }
    if (bitVal == newBitVal) {
        newVal = intVal;
    }
    else {
        if (bitVal == 0) {
            newVal = intVal + key;
        }
        else {
            newVal = intVal & reversedKey;
        }
    }
    cout << "new value: "<<newVal;*/

                            /*номер пять инт*/

    /*int intValue, bitNum, newBitVal, bitVal, newVal;
    unsigned int key, reversedKey;
    cout << "вводи число: ";
    cin >> intValue;
    cout << "выбирай номер бита: ";
    cin >> bitNum;
    if (bitNum > 32) {
        cout << ("извиняй слишком много( ");
        exit(0);
    }
    cout << "на что меняем (1 или 0): ";
    cin >> newBitVal;
    cout << "og value: " << intValue << endl;
    key = 1;
    key = key << (bitNum - 1);
    reversedKey = ~key;
    if ((intValue & reversedKey) == intValue) {
        bitVal = 0;
    }
    else {
        bitVal = 1;
    }
    if (bitVal == newBitVal) {
        newVal = intValue;
    }
    else {
        if (bitVal == 0) {
            newVal = intValue + key;
        }
        else {
            newVal = intValue & reversedKey;
        }
    }
    cout << "new value: " << newVal;*/
}   