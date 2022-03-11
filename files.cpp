#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream file;
file.open("myfile",ios::in);
string s;
while(file>>s){
cout<<s<<' ';
}
  file.close();
    return 0;
}