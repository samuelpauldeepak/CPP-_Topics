#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using namespace std;
int main(){
    vector<string> groceryList;
    string item;
    cout<<"Enter the list: ";
    while(cin>>item){
        groceryList.push_back(item);
    }
    for(auto a : groceryList){
        cout<<a<<endl;
    }
    
}