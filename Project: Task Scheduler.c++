#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> tasks;

    tasks.push(1);
    tasks.push(5);
    tasks.push(3);

    while(!tasks.empty()){
        cout<<tasks.top()<<endl;
        tasks.pop();
    }
}
