#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    vector<vector<string>> people;
    vector<std::string> person;
    string entry, name;
    
   fstream file ("name.csv", ios::in);
    // Get the CSV file into a vector of vectors.
    if(file.is_open()){
        while(getline(file, entry,',')){
            stringstream str(entry);
            person.clear();
            while(getline(str, name,' '))
                person.push_back(name);
            people.push_back(person);
        }
        file.close();
    }
    else{
        cout << "Something went wrong\n" << flush;
        return 1;
    }
    
    cout<<"People found in the CSV file:\n\n";
    
    for(int i=0; i<people.size(); i++){
        for(int j=0; j<people[i].size(); j++)
            cout << people[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";

    for(int i=0; i<people.size()-1; i++){
        for(int j=i+1; j<people.size(); j++)
            if(people[i][1].compare(people[j][1]) == 0){
                cout << people[i][0] << " " << people[i][1] << " may be related to " << people[j][0] << " " << people[j][1] << ".\n\n" << flush; 
                return 0;
            }
    }
    cout << "No relatives found.\n\n" << flush;  
    return 0;
}
 