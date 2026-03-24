#include <iostream>
#include <queue>
#include <thread>
#include <mutex>
using namespace std;

queue<int> q;
mutex m;

void producer(){
    for(int i=1;i<=5;i++){
        m.lock();
        q.push(i);
        cout<<"Produced "<<i<<endl;
        m.unlock();
    }
}

void consumer(){
    for(int i=1;i<=5;i++){
        m.lock();
        if(!q.empty()){
            cout<<"Consumed "<<q.front()<<endl;
            q.pop();
        }
        m.unlock();
    }
}

int main(){
    thread t1(producer), t2(consumer);
    t1.join();
    t2.join();
}
