//Single Dimentional Array........

#include <iostream>
using namespace std;
int main(){
   int a[5];
   int i;
   cout<<"Enter the Numbers:"<<endl;
   for(i=0;i<5;i++){
       cin>>a[i];
   }
  cout<<"the Number are:"<<endl;
   for(i=0;i<5;i++){
      cout<<"Number of a["<< i <<"] is: " <<a[i]<<endl;
   }
    return 0;
}