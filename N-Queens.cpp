#include<iostream>
#include<math.h>
using namespace std;
int board[20],count;

void print(int n){
    int i,j;
    cout<<"\n\nSolution :"<<++count<<endl;
    for(i=1;i<=n;i++){
        cout<<"\t"<<i;
    }
    cout<<endl;
    for(i=1;i<=n;i++){
        cout<<"\n\n"<<i;
     for(j=1;j<=n;j++){
         if(board[i]==j)
         cout<<"\t"<<'Q';
         else
         cout<<"\t"<<'-';
     }

    }
    cout<<endl;
    
}


int place(int row,int c){
 int i;
 for(i=1;i<=row;i++){
     if (board[i]==c)
     return 0;
     else if(abs(board[i]-c)==abs(i-row))
     return 0;
 }
 return 1;
}

void queens(int row,int n){
    int c;
    for(c=1;c<=n;c++){
        if(place(row,c))
        {
            board[row]==c;
            if(row==n)
            print(n);
            else
            queens(row+1,n);
            
        }
    }
}
int main(){
    int n,i,j;
    cout<<"Enter the num of queens"<<endl;
    cin>>n;
    queens(1,n);
   
}