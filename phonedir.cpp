// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
#include<cstring>
using namespace std;
class name{
    char str[40];
    public: 
    name(){
        strcpy(str,"");
    }
    name(char*a){
        strcpy(str,a);
    }
    char *get(){return str;}
};
bool operator<(name a,name b){
    return strcmp(a.get(),b.get())<0;
};
class phone{
    char str[80];
    public: 
    phone(){
        strcpy(str,"");
    }
    phone(char*s){
        strcpy(str,s);
    }
    char *get(){return str;}
};

int main(){
    map<name,phone> dir;
    dir.insert(pair<name, phone>(name((char*)"a"), phone((char*)"222567")));
    char str[80];
    cin>>str;
    map<name,phone>::iterator p;
    p=dir.find(name(str));
    if(p!=dir.end()){
        cout<<p->second.get();
    }
    
}
