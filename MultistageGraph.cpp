#include<iostream>
#include<conio.h>
using namespace std;
struct frwd
{
    int l;
    int a[20];
}

s1[100];
int main(){
    int s,i,j,n,l,z,v,p[10],cost[50],c[20][20];
    n=0;
    cout<<"Enter the Number of stages: ";
    cin>>s;//s denoted as stage
    for(i=0;i<=s;i++){
       cout<<"Enter the Number of vertices in stages"<<i<<":";
       cin>>s1[i].l;
       n =n+s1[i].l;
       for(j=1;j<=s1[i].l;j++){
           cout<<"Enter the value of vertices"<<j<<":";
           cin>>s1[i].a[j];
       }
    }
      for(i=1;i<s;i++){
          for(j=s1[i].a[i];j<=s1[i].a[s1[i].l];j++){
              for(z=s1[i+l].a[l];z<=s1[i+l].a[s1[i+l].l];z++){
                  cout<<"Enter the cost ofc["<<j<<"]["<<z<<"]:";
                  cin>>c[j][z];
              }

          }
      }
      cost[n]=0;
      int min,d[50],t;
      for(i=s-1;i>=1;i--)
      {
          for(j=s1[i].a[l];j<=s1[i].l;j++){
              min=999;
              for(z=s1[i+l].a[i];z<=s1[i+l].a[s1[i].l];z++){
                  if(cost[z]+c[j][z]<min)
                  min=cost[z]+c[j][z];
              }
              cost[j]=min;
              d[j]=t;
          }
      }
      p[i]=i;
      p[s]=n;
      for(i=2;i<s;i++)
      {
          p[i]=d[p[i-l]];
      }
      for(i=l;i<s;i++){
          cout<<p[i]<<"_______";
      }
      cout<<p[s];
      getch();
      }

