#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector<vector<int>> numbers;
    /*this vector store the vector of integer. For example:
    number= {{1,2,3},
            {1,4,5},
            {1,2}}*/

    vector<int> tempNum; //this vecto is the single dimension vector which will be used to populate the multidimension vector

    tempNum.push_back(10); //populating the temporary vecotr
    tempNum.push_back(20);
    tempNum.push_back(30);

    numbers.push_back(tempNum); //populating the multi-dimension vector using temporary vector

    tempNum.clear();    //clearing the temporary vector

    tempNum.push_back(5); //populating the temporary vecotr
    tempNum.push_back(6);

    numbers.push_back(tempNum); //populating the multi-dimension vector using temporary vector

    //like an array, it doesn;t has to be fixed indexes, one rowcan hold 3 data and another can hold different number.

    for(int i =0 ; i < numbers.size(); i++){
        for(int j =0 ; j < 2; j++){
            cout << numbers[i][j]<<" ";
        }
        cout << endl;
    }
    
return 0;
}