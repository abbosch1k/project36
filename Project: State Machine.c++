#include <iostream>
using namespace std;

int main(){
    int state=0;

    for(int i=0;i<3;i++){
        if(state==0){ cout<<"Idle\n"; state=1; }
        else if(state==1){ cout<<"Run\n"; state=0; }
    }
}
