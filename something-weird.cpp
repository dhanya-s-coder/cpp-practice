#include<iostream>
using namespace std;
class base{
    int i;
    public:
    int j,k;
    void seti(int x){
        i=x;
    }
    int geti(){
        return i;
    }
};
class derived :public base{
    public:
    int a;
    using base::j;
    using base::seti;
    using base::geti;
    // using base::i;
    
};
int main(){
    derived ob;
    ob.j=20;
    ob.a=40;
    ob.seti(10);
    //ob.i=30;
     cout << "i = " << ob.geti() << endl;  // access through getter
    cout << "j = " << ob.j << endl;
    cout << "a = " << ob.a << endl;
}
