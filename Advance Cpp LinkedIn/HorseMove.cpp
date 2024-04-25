#include <iostream>
#include <vector>
#include <string>
using namespace std;


vector<string> possibleMove(string knightPosition){
    vector<string> nextMoves;
    string newLoc = "  ";
    int newX,newY;
    int x = knightPosition[0] - 'a' + 1;
   
    int y = knightPosition[1] - '0';
    

    const int LR[] = {-1,1};
    const int UD[] = {-2,2};

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            newX = x + LR[i];
            newY = y + UD[j];
          

            if (x > 0 && x < 9 && y > 0 && y  < 9 ){
                  newLoc[0] = newX + 'a' - 1;
                  newLoc[1] = newY + '0';

                  nextMoves.push_back(newLoc); 
            } 

            newX = x + UD[i];
            newY = y + LR[j];

            if (x > 0 && x < 9 && y > 0 && y  < 9 ){
                  newLoc[0] = newX + 'a' - 1;
                  newLoc[1] = newY + '0';
                  nextMoves.push_back(newLoc); 
            }   
        }      
    }

    return nextMoves;
}

int main(){
    string knightPos;

    cout << "Enter the position of knight: ";
    cin >> knightPos;
    cout << endl;

    vector<string> nextMove = possibleMove(knightPos);

    cout << "Possible moeves for knight are: ";
    for(auto element:  nextMove){
        cout << element << "  " ;
    }
}
