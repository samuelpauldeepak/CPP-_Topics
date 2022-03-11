#include<iostream>
using namespace std;
class Distance{
    private:
    int feet,inches;
    public:
   friend istream &operator>>(istream &input ,Distance &d){
        cout<<"Enter feet and inches-inches should be 0-11";
        input>>d.feet>>d.inches;
        return input;
    }
    friend ostream &operator<<(ostream &output,Distance &d){
        output<<d.feet<<"ft "<<d.inches<<"in";
        return output;
    }
    Distance operator+(Distance d){
        Distance temp;
        temp.feet= this ->feet+ d.feet;
        temp.inches= this ->inches+d.inches;
        if(temp.inches >11){
            temp.feet++;
            temp.inches -=12;
        }
        return temp;
    }
    Distance operator-(Distance d){
        Distance temp;
        temp.feet=this->feet - d.feet;
        temp.inches=this->inches- d.inches;
        if(temp.inches<0){
            temp.feet--;
            temp.inches= temp.inches +12;
        }
        return temp;
    }
   bool operator<(Distance d){
       if( this ->feet < d.feet)
       return true;
       if( this-> feet == d.feet && this->inches < d.inches)
       return true;
       return false;
    }

};
int main(){
    Distance d1,d2,d3,d4;
    cin>> d1>>d2;// istream operator>>(istream , d)
    if(d1<d2){ //d1 operator<(d2)
        cout<<"d1 is short";}
        else
        cout<<"d1 is greater";
    
    //d3=d1-d2;// d1 operator-(d2)
   // cout<< d1<<endl;
  //  cout<<d2<<endl;
  //  cout<<d3<<endl;
      
    return 0;
}