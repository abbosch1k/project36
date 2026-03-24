#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void task(int id){
    cout<<"Task "<<id<<endl;
}

int main(){
    vector<thread> pool;

    for(int i=0;i<3;i++)
        pool.push_back(thread(task,i));

    for(auto &t:pool)
        t.join();
}
