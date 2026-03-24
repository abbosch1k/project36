#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("config.txt");
    string key,value;

    while(file>>key>>value)
        cout<<key<<"="<<value<<endl;
}
