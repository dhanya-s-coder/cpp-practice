#include<iostream>
#include<cstdlib>
using namespace std;
const int SIZE=10;
template <class Atype> class atype{
    Atype a[SIZE];
    public:
    atype(){
        int i;
        for(i=0;i<SIZE;i++){
            a[i]=i;
        }
    }
    Atype &operator[](int i);
};
template <class Atype> Atype &atype <Atype> :: operator[](int i){
    if(i>8){
        cout<<"Index"<<i<<"is out of bound"<<endl;
        exit(1);
    }
    return a[i];
}
int main(){
    atype<int> aob;
    atype<double> dob;
    int i;
    cout<<"integer array\n";
    for(i=0;i<SIZE;i++){
        aob[i]=i;
    }
    for(i=0;i<SIZE;i++){
        cout<<aob[i]<<"\n";
    }
    cout<<"double array\n";
    for(i=0;i<SIZE;i++){
        dob[i]=(double)i/3;
    }
    for(i=0;i<SIZE;i++){
        cout<<dob[i]<<"\n";
    }
    return 0;
}
