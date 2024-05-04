#include <iostream>
#include <string>

using namespace std;

string ip(string ipAdd){

int networkAdd;
string tempAdd;
    for(char i : ipAdd){
        if(i != '.'){
            tempAdd += i;
        }
        else{
            break;
        }
    }
    networkAdd = stoi(tempAdd);
    if(networkAdd > 0 && networkAdd < 127){
        return "Class A network";
    }
    else if(networkAdd > 127 && networkAdd < 191){
        return "Class B network";
    }

    else{
        return "Class C network";
    }
}

int main(){

string ipAdd;
cout <<"Enter your Ip address" << endl;
cin >> ipAdd;

cout << ip(ipAdd) <<endl;

}