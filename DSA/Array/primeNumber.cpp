#include <iostream>
#include <vector>
using namespace std;

void primNumber(const int arr[], int size, std::vector<int> &primes){

    int n=0;
    if(size < 1 ){
        cout << "Array is empty";
    }

    for (int i = 0 ; i < size ; i++){
        int current = arr[i];

        for (int j = 1 ; j < current/2 ; j++){
            if (current % j == 0 ){
                n ++;
            }
        }

        if (n < 2){
            primes.push_back(current);
            n= 0;
        }
    }   

    cout << "The prime Numbers are: " << endl;
     for (size_t i = 0; i < primes.size(); ++i) {
        cout << primes[i] << " ";
    }
  
}

int main(){
    int number[] = {2,5,7,11,17,23};
    std::vector<int> prime;
    int size = (sizeof(number)/sizeof(int));

    primNumber(number, size, prime);
}