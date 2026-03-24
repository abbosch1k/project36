#include <iostream>
using namespace std;

class Command{
public:
    virtual void execute(){ cout<<"Command executed\n"; }
};

int main(){
    Command c;
    c.execute();
}
