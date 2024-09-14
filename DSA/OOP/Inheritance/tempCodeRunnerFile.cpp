#include <iostream>
#include <string>

using namespace std;

class Animal{
    public:

        void legs(){
            cout << "This Animal has 4 legs." <<endl;  
        }

        void sound(){
            cout <<"This Animal: " << endl;
        }

        void type(){
            cout << "This animal is: " << endl;
        }
};

class Dog: public Animal{
    public:
    void sound(){
        cout <<"This Animal:" << " barks"<<endl;
    }

};

int main(){

    Dog D1;
    D1.legs();
    D1.sound();
    return 0;
}