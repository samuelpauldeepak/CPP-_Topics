#include<iostream>
using namespace std;
int main(){
 int *p,*p1;//it will return a address so we pass a pointer variable.
 p= new int(10);//this is how we create a dynamic heap stroage Ex.(new data_type(data)/[array]).
 p1 = new int[3];//this is for array;
 cout<<*p<<endl;
 delete p;//created using new and deleted using this key word with the pointer variable
 cout<<"from *p :"<<*p<<endl;

 
 
  return 0;
}