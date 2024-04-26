#ifndef COMPLEX_NUM_H
#define COMPLEX_NUM_H

#include <iostream>

using namespace std;

class complexNum
{
private:
    int real;
    int imaginary;
    string cNum;
public:
  
    //setter
    void setReal(int r) {
      real = r;
    }
    // Getter
    int getReal() {
      return real;
    }

    //setter
    void setImaginary(int i) {
      imaginary = i;
    }
    // Getter
    int getImaginary() {
      return imaginary;
    }

     string getCNum() {
        cNum = to_string(real) +  "+" + to_string(imaginary) + "j"; 
        return cNum;
    }

    string operation(char op, const complexNum& other){
            int added_Real = 0;
            int added_Imaginary = 0;
            string ans;

           if (op == '+'){
                added_Real = real + other.real;
                added_Imaginary = imaginary + other.imaginary;
           } 
           else if (op == '-'){
                added_Real = real - other.real;
                added_Imaginary = imaginary - other.imaginary;
           } 
           else if(op == '*')
           {
                added_Real = (real * other.real) - (imaginary * other.imaginary);
                added_Imaginary = (real * other.imaginary) + (imaginary * other.real);
           }
           else if(op == '/'){
                added_Real = ((real * other.real) + (imaginary * other.imaginary)) / ((other.real^2) + (other.imaginary^2)) ;
                added_Imaginary =  ((imaginary * other.real) - (real * other.imaginary)) / ((other.real^2) + (other.imaginary^2));
           }
            ans =  to_string(added_Real) +  "+" + to_string(added_Imaginary) + "j"; 
           return (ans);
    }
};

#endif