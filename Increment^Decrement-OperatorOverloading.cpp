#include<iostream>
#include<string>
using namespace std;
class Time{
    private:
    int hour;
    int minute;
    public:
    Time(int h,int m){
        hour=h;
        minute=m;
    }
    string displayTime(){
        //cout<<hour<<':'<<minute;
        return to_string(hour)+ ':' +to_string(minute);
    }
      void operator++(){
        minute++;
        if(minute>=60){
            hour++;
            minute=minute -60;
        }
    }
    void operator++(int){
        minute++;
        if(minute>=60){
            hour++;
            minute=minute - 60;
        }
    }
   
};

int main(){
    Time t1(5,57);
    t1++;
    ++t1;
   cout<< t1.displayTime();
}

