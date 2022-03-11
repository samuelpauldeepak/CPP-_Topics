#include<iostream>
#include<string>
using namespace std;
class Base{
    private:
    string No1;
    public:
    Base(string n1){
        No1=n1;

    }
   /* void setName(string n ){
        name=n;
    }*/
     void getNo(){
        cout<<No1;
    }
};
class Derived : public Base {//here we change our access specifier
 private:
 string name;
 
 public:
 Derived(string n1)
 : Base(n1)//Inheriting with Base constructor and not initiating a new variable EX(Base N1)in the private area
 {
   
 }
 
 void print(){
  Base::getNo();
 }
};

int main(){
    Derived d1("dlast");
    d1.print();
    
    //d1.print();
}