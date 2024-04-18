#include <iostream>
#include <list>

using namespace std;

class Route {
private:
       list<int> routerList;
       list<int>::iterator current;


public:
    Route(){
        current = routerList.end();
    }

    void add_stop(const int &new_node){
        routerList.push_back(new_node);
        if (current == routerList.end()){
            current == routerList.begin();
        }     
    }


    void next_stop(){
       if (!routerList.empty()){
        current ++;
        if (current == routerList.end()){
            current == routerList.begin();
        }  
       }
    }

    void prev_stop(){
        if (!routerList.empty()){
        if (current == routerList.begin()){
            current == routerList.end();
        }  
        current --;
       }

    }

    void current_stop(){

       if (!routerList.empty()){
        cout << "the current stop is: " << *current << endl;
       }
       else{
        cout << "List is empty" << endl;
       }  

    }

};

int main(){
 
 Route r1;

r1.add_stop(1);
r1.add_stop(2);
r1.add_stop(3);
r1.add_stop(4);
r1.add_stop(5);

r1.current_stop();

r1.next_stop();

r1.current_stop();



}