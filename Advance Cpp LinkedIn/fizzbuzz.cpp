#include <iostream>
#include <string>

using namespace std;


int fizzbuzz(int inputNum){

    if ((inputNum % 3 == 0) and (inputNum % 5 == 0)){
        return 0;
    }  
    else if ((inputNum % 3 == 0) and (inputNum % 5 != 0)){
        return -3;
    }
    else if ((inputNum % 3 != 0) and (inputNum % 5 == 0)){
        return -5;
    }
    else{
        return inputNum;
    }

}



int main(){

    int userInput;
    int result;
    cout << "Enter a Number" << endl;
    cin >> userInput;

    for(int i =1 ; i <= userInput ; i++){
        
        result = fizzbuzz(i);
        if (result == 0){
            cout << " FizzBuzz ";
        }
        else if(result == -3){
            cout << " Fizz ";
        }
        else if (result == -5){
            cout << " Buzz ";
        }
        else{
            cout << " " << result<< " ";
        }

    }

}