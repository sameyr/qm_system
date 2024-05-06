#include <iostream>
#include <string>
#include <vector>
using namespace std;

float calculateAge(string dob){
    vector<string> dateComponent;
    string component;
    int year;
    int totalAge = 0;
    for(int i = 0 ; i < dob.size(); i++){
        if(dob[i] == '-'){
            dateComponent.push_back(component);
            component="";
        }
        else{
            component = component + dob[i];
        }
    }
    year = stoi(dateComponent[0]);
    
    while(year != 2024){
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            totalAge += 366; // Leap year
        } else {
            totalAge += 365; // Non-leap year
        }
        year++; // Move to the next year
    }

    return totalAge;

}

int main(){
string dob;
cout << "Enter your Birthdate: ";
cin >>dob;
cout << endl;

cout << calculateAge(dob);
return 0;
}