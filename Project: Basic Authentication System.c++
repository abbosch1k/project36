#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,string> users;
    users["admin"]="1234";

    string u,p;
    cin>>u>>p;

    if(users[u]==p)
        cout<<"Access";
    else
        cout<<"Denied";
}
