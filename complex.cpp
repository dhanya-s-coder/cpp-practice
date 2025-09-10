#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(int i,int j){
        real=i;
        img=j;
    }
    Complex(int i){
        real=i;
        img=0;
    }
    ~Complex(){
        cout<<real<<"+"<<img<<"i\n";
    }
};
int main(){
    Complex ob(1,2);
    Complex(1);
}
