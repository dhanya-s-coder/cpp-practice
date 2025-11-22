// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<cctype>
using namespace std;
int main() {
   vector<int> v(10);
   int i;
   cout<<v.size()<<"\n";
   for(i=0;i<10;i++){
       v[i]=i+'a';
   }
   for(i=0;i<10;i++){
       cout<<v[i]<<" ";
   }
   cout<<"\n";
   for(i=0;i<10;i++){
       v.push_back(i+10+'a');
   }
   cout<<v.size()<<"\n";
   for(i=0;i<v.size();i++){
       cout<<v[i]<<" ";
   }
    cout<<"\n";
    for(i=0;i<v.size();i++){
        v[i]=toupper(v[i]);
    }
    for(i=0;i<v.size();i++){
       cout<<v[i]<<" ";
   }
    cout<<"\n";
}
