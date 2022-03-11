#include<iostream>
#include<string>
using namespace std;
class Date{
    private:
    int day,month,year;
    public:
    Date(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }
    string getDate(){
        return to_string(day)+'-'+to_string(month)+'-'+to_string(year);
    }
};
class Employee{
    private:
    string Name;
    Date dob;
    public:
    Employee(string n,int d,int m,int y)
        :Name(n), dob(d,m,y){

        }
    
    string getName(){
        return Name;
    }
    string getdob(){

        return dob.getDate();
    }

};

int main(){

    Employee e1("Deepak",27,9,2001);
    cout<<e1.getName()<<" "<<e1.getdob();
    return 0;
}