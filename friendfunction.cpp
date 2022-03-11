#include<iostream>
#include<string>
using namespace std;
class Number{
    friend void setx(Number &c,int x1);//friend function declaration
    private:
    int x;
    public:
    Number()
        :x(0){

        }
    
     void setx(int x1);

     int getx(){
         return x;
     }
};
void setx(Number &c,int x1){//connecting the refference
    c.x=x1;//this is how we connect the values
}
 
 int main(){
     Number n1,n2;
     
     setx(n1,200);//sending the class about the setx function
     setx(n2,80);//you can make many friend function like this
cout<<n1.getx()<<" "<<n2.getx();
return 0;
 }