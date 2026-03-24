#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("log.txt");
    string line;
    int errors=0;

    while(getline(file,line))
        if(line.find("ERROR")!=string::npos)
            errors++;

    cout<<"Errors: "<<errors;
}
