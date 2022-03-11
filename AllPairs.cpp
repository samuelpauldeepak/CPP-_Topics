#include<iostream>
using namespace std;

void floyds(int p[10][10],int n){
    int i,j,k;
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i==j)
                p[i][j]=0;
                else
                 p[i][j]=min(p[i][j],p[i][k]+p[k][j]);
            }
        }
    }
    
}

int min(int a,int b){
    if(a<b);
    return a;
    return b;
}

int main(){
    int p[10][10],n,e,u,v,w,i,j;

    cout<<"Enter the number of vertices"<<endl;
    cin>>n;
    cout<<"Enter the number of edges"<<endl;
    cin>>e;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            p[i][j]=99;
        }
    }
    
    for(i=1;i<=e;i++){
        cout<<"Enter the first and second vertices "<<i<<"with its weights"<<endl;
        cin>>u>>v>>w;
        p[u][v]=w;
    }
    cout<<"The Matrixes are:  "<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<"\t"<<p[i][j];
            
        }
        cout<<endl;
    }

    floyds(p,n);
    cout<<"Transitive closure:"<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<"\t"<<p[i][j];
        }
        cout<<endl;
    }
cout<<"Shortest path"<<endl;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i!=j){
            cout<<'('<<i<<','<<j<<')'<<'='<<p[i][j]<<endl;
        }
    }
}

}