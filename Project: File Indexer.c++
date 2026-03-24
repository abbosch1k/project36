#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("data.txt");
    string line;

    while(getline(file,line)){
        if(line.find("hello")!=string::npos)
            cout<<"Found: "<<line<<endl;
    }
}
