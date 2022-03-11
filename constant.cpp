#include<iostream>
#include<string>
using namespace std;
class Books{
    private:
    string bookName;
    string authorName;
    public:
    salary(string bn , string an){
         bookName=bn;
         authorName=an;
    }
    string getbookName()  const// this const help for security purpose
    { 
        return bookName;
    }
};

int main(){
   const Books b1("xyz","zyx");
    cout<<b1.getbookName();
    return 0;

}