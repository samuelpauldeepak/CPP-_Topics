#include<iostream>
#include<string>
using namespace std;
class Message{
    private:
    int form;
    public:
    Message(int form){
        this ->form=form;
  } //[this ->] this function helps to differenciate / point the object variable from local variable.. 
                          
     int getForm(){
         return this ->form ;
     }
};
int main(){
    Message m1(10);
    cout<<m1.getForm();
}