#include <iostream>

using namespace std;

int elementSearch(double arr[], int size, double target){
    
    for(int i =0 ; i < size ; i++){
        if ( arr[i] == target){
            return i;
        }
    } 

    return -1;


}

int main(){
    double number[] = {2,-7,11};
    int size = (sizeof(number)/sizeof(double));
    double target = 2;
    int ans= elementSearch(number, size, target);
    string name;    

    cout << "Enter your name" << endl;
    cin >>  name;

    if (ans == -1){
        cout << "element doesn't exist"<<endl;
    }
    else{
        cout << "element exist at index: " << ans <<endl;
    }

}