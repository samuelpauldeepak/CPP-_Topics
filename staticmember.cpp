#include<iostream>
#include<string>
using namespace std;
class Member{
    private:
        static int MemberCount;
        int form;
    public:
        Member(int f){
            form=f;
            MemberCount++;
        }
        int getForm(){
            return form;
        }
    static int getMemberCount(){
            return MemberCount;
        }
};
int Member::MemberCount=0;//static member syntax is like this.....
int main(){
    Member m1(10),m2(2),m3(32),m4(23),m5(34);
    
    cout<<m1.getForm()<<endl;
    cout<<Member::getMemberCount();
    return 0;
}