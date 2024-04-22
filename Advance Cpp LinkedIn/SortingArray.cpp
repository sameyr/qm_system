#include <iostream>
#include <string>

using namespace std;


void sortedArray(double unsortedarray[], int Arrsize){

    double high;

    for (int i = 0 ; i < Arrsize  ; i++){
        for (int j = 0 ; j < Arrsize ; j++){
            if (unsortedarray[i] < unsortedarray[j]){
                high = unsortedarray[i];
                unsortedarray[i] = unsortedarray[j];
                unsortedarray[j] = high;
            }
        }
    }

    cout <<"Sorted array: " ;

    for (int i = 0 ; i < Arrsize ; i++){
        cout << unsortedarray[i] << " ";
    }
    cout << endl;

}


int main(){

    double array[] = {5,7, 3, 2, 6, 9};

    int sizeofArray = sizeof(array)/sizeof(double);

    sortedArray(array, sizeofArray); 

}