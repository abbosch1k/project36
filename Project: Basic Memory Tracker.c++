#include <iostream>
using namespace std;

int allocated=0;

void* myAlloc(int size){
    allocated += size;
    return malloc(size);
}

int main(){
    int* p=(int*)myAlloc(10*sizeof(int));
    cout<<"Allocated "<<allocated;
}
