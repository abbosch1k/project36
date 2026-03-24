#include <iostream>
using namespace std;

class Service{
public:
    void run(){ cout<<"Service\n"; }
};

class App{
    Service* s;
public:
    App(Service* s):s(s){}
    void start(){ s->run(); }
};

int main(){
    Service s;
    App app(&s);
    app.start();
}
