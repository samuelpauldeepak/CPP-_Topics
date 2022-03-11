#include<iostream>
using namespace std;
int main()
{
    int a,b;
   cout<<"Enter a and b"<<endl;
   cin>>a>>b;
   try{//this try block is used to handle exception it check the condition to handle exception...
      if(b==0)
      throw"b is zero";//it is like a goto statement if it execute it will search for catch function..
   
   cout<<a/b<<endl;
   }
   //it is the catch function if the throw will execute it will reach the correct type of catch
   catch(const char *s){//const char is (pack of strings)....lik[ hi= string]/[hi hello = const char]
       cout<<"Error occured"<<s<<endl;
   }
   cout<<"End of program";
   return 0;
}