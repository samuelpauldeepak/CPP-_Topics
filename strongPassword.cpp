#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool isStrongPassword(string);
int main(){
    string s1;
cout<<"Enter the password..The password contains: Minimum Length of 8 character."<<endl;
cout<<"                                           Contains atleast One Number."<<endl;
cout<<"                                           Contains atleast One Spectial Character."<<endl;
cout<<"                                           Contains atleast One Uppercase Letter."<<endl;
cout<<"Enter: ";
getline(cin,s1);
if(isStrongPassword(s1)){
    cout<<"You Entered Strong Password"<<endl;
}
else {
    cout<<"The Password is not Strong Password"<<endl;
}

 return 0;
}

bool isStrongPassword(string s2){
    bool containsUpper=false,containsSpecial=false, containsNumber=false;
       for(auto c:s2){
           if(isupper(c)){
               containsUpper=true;
           }
           if(ispunct(c)){
               containsSpecial=true;
           }
           if(isdigit(c)){
               containsNumber=true;
           }
       }

       if(containsUpper && containsSpecial && containsNumber && s2.size()>=8)
           return true;
       
  return false;
}

   
