#include <iostream>
#include "complexNumber.h"
using namespace std;

int main(){
    complexNum num1, num2;
    int real, imaginary;
    char op;

    cout << "Real number for num1" << endl;
    cin >> real;

    cout << "Imaginary Number for num1" << endl;
    cin >> imaginary;

    num1.setReal(real);
    num1.setImaginary(imaginary);

    cout << "Real number for num2" << endl;
    cin >> real;

    cout << "Imaginary Number for num2" << endl;
    cin >> imaginary;

    num2.setReal(real);
    num2.setImaginary(imaginary);

    cout << "What operation '+' '-' '*' '/' do you want to perform ?"<< endl;
    cin >> op;

    cout << num1.operation(op,num2)  << endl;

}