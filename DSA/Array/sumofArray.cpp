#include <iostream>
#include <string>

using namespace std;

int sumArray(const int arr[], int size){
    int sum = 0;

    if (size == 0){
        return 0;
    }
    else{
        for (int i =0 ; i < size ; i++){
            sum = sum + arr[i]; 
        }
        return sum;
    }

}


int main(){
    int number[] = {2,-7,11};
    int size = (sizeof(number)/sizeof(int));

    int sum = sumArray(number, size);

     cout << "The sum of the array is : " << sum  << "."<< endl;
}