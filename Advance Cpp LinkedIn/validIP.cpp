#include <iostream>

using namespace std;

bool validIP(string ip){
    int ipBit[] = {0,0,0,0};
    int ipBitCount=0;
    string ipComp;
    int valid = 0;
    int count = 0;

     for (int i = 0 ; i < ip.length() ; i++){
        if(ip[i] == '.'){
            count ++;
        }
    }

    if(count == 3){
        for(int i = 0 ; i < ip.length() ; i++){
            if (ip[i] != '.'){
                ipComp += ip[i];  
            }
            else{
                ipBit[ipBitCount] = stoi(ipComp);
                ipComp="";
                if (ipBitCount < 4){
                    ipBitCount++;
                }
                else{
                    ipBitCount = 0;
                }
            }
        }
    }   
    else{
        return false;
    }

    for(int j =0 ; j <4 ; j++){
        if((ipBit[j] >= 0) && (ipBit[j] < 256)) {
            valid ++;
        }
        else{
            valid--;
        }
    }

    if (valid == 4){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    string ipAddress;
    bool valid;
    
    cout << "Enter IP address" << endl;
    cin >>ipAddress;

    valid = validIP(ipAddress);

    if(valid){
        cout << "Valid IP address : " << ipAddress << endl;
    }
    else{
        cout << "Invalid IP address : " << ipAddress << endl;
    }

}