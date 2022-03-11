#include<iostream>
using namespace std;
class Msc{
    private:
    int TotalStudents=0;
    int boys=10;
    int girls=4;
    public:
   /* Msc( int b, int g){
        boys = b;
        girls = g;
    }*/
    int setTotalStudents()
    {
        TotalStudents = boys + girls;
       return TotalStudents;
    
    }
    int print(){
        setTotalStudents();
        cout<<"Total No.of Boys: "<<boys<<endl;
        cout<<"Total No.of Girls: "<<girls<<endl;
        cout<<"Total Students in M.Sc: "<<TotalStudents<<endl;
    }
};

 class Scholarship : public Msc{
     private:
     string name;
     char gender;
     long long int PhoneNumber;
     int Boys;
     int Girls;
     public:
    /* Scholarship(string n,char g,long pN)
     //:Msc(Boys,Girls)
     {
         name = n;
         gender = g;
         PhoneNumber= pN;    
     }*/
      
     friend istream &operator>>(istream &input, Scholarship &s){
         cout<<"---------------------------------------------------------------------------------------------"<<endl;
         cout<<"  ********************************Applying for Scholarship********************************"<<endl;
         cout<<"---------------------------------------------------------------------------------------------"<<endl;
         cout<<endl;
         cout<<endl;
         cout<<"Enter Your Name:"<<endl;
         input>>s.name;
         cout<<"Enter Your Gender (M or F):"<<endl;
         input>>s.gender;
         cout<<"Enter Your Mobile Number:"<<endl;
         input>>s.PhoneNumber;
         return input;
     }
     void print(){
         cout<<"Name of the Student: "<< name <<endl;
         if(gender == 'M'){
             cout<<"Gender of the Student is Male"<<endl;
         }
         else{
             cout<<"Gender of the Student is Female"<<endl;
         }
         cout<<"Number of the Student is: "<<PhoneNumber<<endl;
         Msc::print();    
     }


 };
int main(){
    Scholarship s1;
    cin>>s1;
    s1.print();




    return 0;
}