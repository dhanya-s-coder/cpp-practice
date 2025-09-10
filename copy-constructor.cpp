#include<iostream>
using namespace std;
class resource{
    int *data;
    public:
    resource(int value){
        data=new int(value);
        
    }
    resource(const resource &obj){
        data=new int(*obj.data);
    }
    int getValue(){
        return *data;
        
    }
    void setValue(int value){
        *data=value;
    }
    ~resource(){
        delete data;
    }
};
int main(){
    resource res1(10);
    resource res2=res1;
    res1.setValue(20);
    cout<<res1.getValue()<<res2.getValue();
}
