#include<iostream>
using namespace std;
template<typename M>
M max(M a,M b,M c,M d,M e,M f,M i,M j);
int main(){
cout<<max(2,3,4,5,6,77,8,9);
return 0;
}
template<typename M>
M max(M a,M b,M c,M d,M e,M f,M i,M j){
    M max;
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    if(d>max)
    max=d;
    if(e>max)
    max=e;
    if(f>max)
    max=f;
    if(i>max)
    max=i;
    if(j>max)
    max=j;
  return max;
}