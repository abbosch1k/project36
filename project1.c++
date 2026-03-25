#include <iostream>
using namespace std;

int main(){
    int tries=3;

    while(tries--){
        cout<<"Trying...\n";
        if(tries==1){
            cout<<"Success\n";
            break;
        }
    }
}
