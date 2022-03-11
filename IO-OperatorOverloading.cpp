/*************************Input&Output Operator Overloading************************/
#include<iostream>
#include<string>
using namespace std;
class Date{
    private:
    int day,month,year;
    public:  //istream for cin/input
    friend istream &operator>>(istream &input,Date &dt);/*{
              cout<<"Enter Day";
              input >> dt.day;
              cout<<"Enter Month";
             input >> dt.month;
             cout<<"Enter Year";
              input>> dt.year;
              return input;          
    } */  
         //ostream for cout/output
    friend ostream &operator<<(ostream &output,Date &dt);/*{
              output<< dt.day <<":"<<dt.month<<":"<<dt.year;
              return output;
    }*/
};

istream &operator>>(istream &input,Date &dt){
              cout<<"Enter Day";
              input >> dt.day;
              cout<<"Enter Month";
             input >> dt.month;
             cout<<"Enter Year";
              input>> dt.year;
              return input;          
    }  
    
ostream &operator<<(ostream &output,Date &dt){/*we cannot copy the data so we send reference to it(&)*/
              output<< dt.day <<":"<<dt.month<<":"<<dt.year;
              return output;
    } 
int main(){
    Date d1;
    cin>>d1;
    cout<<d1;
    return 0;
}
