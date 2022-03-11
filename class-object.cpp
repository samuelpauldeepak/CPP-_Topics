#include<iostream>
//#include<string>
#include<vector>          //writing a program to understand iterator
//#include<cctype>
using namespace std;
int main(){
vector<int> a={2,4,5,6,7,8};  //initiating vector as int(a)
auto b= a.end();            //intitalize another variable 'b' and set 'b' as a.begin() [ a.begin() means first element in vector 'a']
while(b !=a.begin()){           //print while(the 'b'/a.begin is not equal to a.end/last element)
    cout<<*b<<endl;   //iterator is like a pointer... that 'b' is a kind of address so put '*' for take the value in the address of 'b'
    b--;
}
    return 0;
}