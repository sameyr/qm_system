#include <iostream>
#include <string>

using namespace std;

int main(){
    string yourName = "My name is : Samir Samir.";
    int count;

    // Copy two characters of s1 (starting
    // from position 3)
    string r = yourName.substr(3, 2);

    // prints the result
    cout << "String is: " << r << endl;

    //getting a substring after a character
    string name = ":";
    int pos = yourName.find(name);
    cout << "String after ':' is : " << yourName.substr(pos + 1) << endl;


    //getting a substring before a character
     cout << "String before ':' is : " << yourName.substr(0,pos - 1);

    
}