#include <iostream>
#include <vector>
using namespace std;

class Observer{
public:
    virtual void update(){ cout<<"Updated\n"; }
};

int main(){
    vector<Observer*> obs;
    Observer o1,o2;

    obs.push_back(&o1);
    obs.push_back(&o2);

    for(auto o:obs)
        o->update();
}
