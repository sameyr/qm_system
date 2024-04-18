#include <iostream>
#include <list>

using namespace std;

class sensorData{

private:
    list<double> sensorValue;
    list<double>::iterator current;

public:

    void add_reading(double value){
        sensorValue.push_back(value);
        if (current == sensorValue.end()){
            current=sensorValue.begin();
        }
    }

    void smooth_data(){
        if (sensorValue.size() < 2){
            return;
        }    

        auto previous = sensorValue.begin();
        auto current = previous;
        current++;  

        while(current != sensorValue.end()){
            if (*current > 2 * (*previous) || *current < 0.5 * (*previous)){
                *current = *previous;
            }    
            current++;
            previous++;
        }

    }

    void print_data(){
         for(auto it = sensorValue.begin(); it != sensorValue.end(); it++){
            cout << *it << ", " << endl;
        }
    }
};

int main(){
    sensorData SensorData1;

    SensorData1.add_reading(1.2);
    SensorData1.add_reading(3.3);
    SensorData1.add_reading(1.1);
    SensorData1.add_reading(1.2);
    SensorData1.add_reading(1.4);


    cout << "The sensor data before using the filter: " <<endl;
    SensorData1.print_data();


    SensorData1.smooth_data();
    cout << "The sensor data after using the filter: " <<endl;
    SensorData1.print_data();
}