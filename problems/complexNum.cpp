#include <iostream>
#include <string>

using namespace std;

class complex{
    private:
        int real;
        int img;

    public:
        complex(int real, int img){
            this->real = real;
            this->img = img;
        }

        complex operator+(complex const& obj){
            complex res(0,0);
            res.real = real + obj.real;
            res.img = img + obj.img;

            return res;
        }

        complex operator-(complex const& obj){
            complex res(0,0);
            res.real = real - obj.real;
            res.img = img - obj.img;

            return res;
        }

        complex operator*(complex const& obj){
            complex res(0,0);
            res.real = (real * obj.real) - (img * obj.img) ;
            res.img = (real * obj.img) - (img * obj.real);

            return res;
        }

         void print(){
            cout << "Complex Number is: " << real << " + " << img <<"i";
        }

};

int main(){

    complex c1(10,11), c2(2,4);
    complex c3 = c1 * c2;
    c3.print();
}