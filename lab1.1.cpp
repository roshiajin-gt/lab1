#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    cout << "размеры типов данных в байтах" << endl;
    cout << "int: " << sizeof(int) << " байт" << endl;
    cout << "short int: " << sizeof(short int) << " байт" << endl;
    cout << "long int: " << sizeof(long int) << " байт" << endl;
    cout << "float: " << sizeof(float) << " байт" << endl;
    cout << "double: " << sizeof(double) << " байт" << endl;
    cout << "long double: " << sizeof(long double) << " байт" << endl;
    cout << "char: " << sizeof(char) << " байт" << endl;
    cout << "bool: " << sizeof(bool) << " байт" << endl;
    return 0;
}
