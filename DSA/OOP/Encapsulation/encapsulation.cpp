#include <iostream>

using namespace std;

class Student{
    private:
        double Regestration_Number = 001123544;
        int Age;

    public:
        string Name;
        string Attendance;

        Student(string Name, string Attendance){
            this->Name = Name;
            this->Attendance = Attendance;
        }

        void setRegestration_Number(double num){
            this->Regestration_Number = num;
        }

        int getRegestration_Number(){
            return Regestration_Number;
        }

        void Print(){
            cout <<"Name: " << Name << endl;
            cout << "Attendance: " << Attendance << endl;
        }
};

int main(){
    Student s1("Samir", "Poor");

    s1.setRegestration_Number(0001123544);

    double reg = s1.getRegestration_Number();
    s1.Print();
    cout << "Regestration Number: " <<  reg << endl;

}