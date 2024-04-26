#include <iostream>
#include <vector>
using namespace std;

void factorial( int number){
    
    vector<int> answer = {1};
    int factorialNum = 1;
    int k ;
    
    for (int i = 1 ; i <= number; i++){
        k=i;
        while(k >= 1){
            factorialNum = factorialNum * k;
            k--;
            if (k == 0){
                answer.push_back(factorialNum);
                factorialNum = 1;
            } 
        }
    }

    cout << "The recursive factorial of " << number << " is: " ;
    for (int j = 0 ; j < answer.size() ; j ++){
        cout << answer[j] << " ";
    }
    cout << endl;
}


int main(){

    int userInput;
    cout << "Enter a number: ";
    cin >> userInput;    
    cout << endl;

    factorial(userInput);

}