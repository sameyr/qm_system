#include <iostream>

using namespace std;


int main(){

    int array[] = {5,6,4,7,3,8,2,9,1};
    int size = sizeof(array)/sizeof(array[0]);
    int j,k, temp ;

    for(int i = 1 ; i < size ; i++){
        j = i-1;
        temp= array[i];
        while(j >=0 && array[j] > temp){
            array[j+1]=array[j];
            j--;
        }
        array[j+1] = temp;
            
    }

    //prints sorted array
    cout << "Sorted Array: ";
    for(int i =0 ; i < size ; i++){
        cout << array[i] << " ";
    } 
    cout <<endl;

}