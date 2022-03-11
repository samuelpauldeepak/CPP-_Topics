#include<iostream>
using namespace std;
class Shape{
    public:
    int length;
    int breadth;
    public:
    Shape(int l, int b){
        length = l;
        breadth = b;
    }
   virtual double area(){// use virtual keyword  when we use virtual function 
        cout<<"area from base class";
        return 0;
    }
};
class Square : public Shape{
    public:
    Square(int l,int b) :Shape(l,b) {}

    double area(){
        cout<<"area from Square: "<<length*breadth<<endl;
        return length*breadth;
    }
};
class Rectangle : public Shape{
    public:
    Rectangle(int l,int b) :Shape(l,b){}

    double area(){
        cout<<"area from Rectangle: "<<(length*2)*breadth<<endl;
        return (length*2)*breadth;
    }
};

int main(){
    Shape *s;//creating a pointer
    Square s1(2,2);
    s=&s1;//make a connection to the pointer
    cout<<s->area();

    Rectangle r1(2,3);
    s=&r1;//make a connection to the pointer
    cout<<s->area();

    return 0;
}