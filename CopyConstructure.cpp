#include<iostream>
using namespace std;
class Complex{//copy constructure.........
    private:
    int real;
    int imagine;
    public:
    Complex(int r=10, int i=10){//this is copy constructure;
        real = r;
        imagine = i;
    }
    void display(){
    
        cout<<real<< "+"<<imagine<<"i";
    }
};
int main(){
    Complex c1/*(9,3)*/;
    c1.display();

}