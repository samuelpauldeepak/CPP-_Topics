#include<iostream>
using namespace std;
class course{//no arguments are passed although
    public://it gives result and it create a
   string courseName;//constructor/defaultconstructor
   int value;
};
int main(){
course c1;
course c2;
cout<<"courseName is:"<<c1.courseName;
cout<<"value is:" <<c1.value;
    return 0;
}