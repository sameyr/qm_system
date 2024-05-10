#include <iostream>
using namespace std;

int fib(int number) {
   if((number==1)||(number==0)) {
      return(number);
   }else {
      return(fib(number-1)+fib(number-2));
   }
}

int main() {
   int input , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> input;
   cout << endl;

   cout << "Fibonnaci Series : ";
   while(i < input) {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}