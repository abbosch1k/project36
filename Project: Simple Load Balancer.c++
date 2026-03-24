#include <iostream>
using namespace std;

int main(){
    string servers[3]={"A","B","C"};

    for(int i=0;i<6;i++)
        cout<<"Request -> "<<servers[i%3]<<endl;
}
