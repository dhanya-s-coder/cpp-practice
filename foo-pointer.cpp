#include <iostream>
using namespace std;

int multiply(int a,int b){
    return(a*b);
}
void print(int(*fptr)(int,int),int a,int b){
    cout<<fptr(a,b)<<"\n";
}
int main(){
 int (*fp)(int,int);
 fp=multiply;
 print(fp,2,10);
}
