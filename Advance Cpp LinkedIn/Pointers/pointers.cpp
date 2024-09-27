#include <iostream>
#include <string>
using namespace std;

int main(){

    int num;
    double num2;

    int *p_number; // can only store address of the same variable which is int
                    // if used address of different variable, it will get compiler error    
    double *p_number1 = nullptr; // pointing to nothing - explicitly initialising null pointers

    cout << "size of interger variable: " << sizeof(num) << endl;
    cout << "size of integer pointer : " << sizeof(p_number) << endl; // the size of all the pointers are gonna be same regardless of its data type. 

    cout << "size of double variable: " << sizeof(num2) << endl;
    cout <<  "size of double pointer : " << sizeof(p_number1) << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    int num1= 1;
    int *p_num1 = &num1;

    
    cout << "num1: " << num1 << endl << "Address of num1 is: " << p_num1;



}