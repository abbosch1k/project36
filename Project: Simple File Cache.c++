#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,string> cache;

    cache["file"]="data";

    cout<<cache["file"];
}
