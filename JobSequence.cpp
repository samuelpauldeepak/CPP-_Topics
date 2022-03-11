#include<iostream>
using namespace std;

typedef struct Job{

    char id[5];
    int deadline;
    int profit;

}job;

void jobSequencingWithDeadline(Job jobs[],int n);

/*int minValue(int x,int y){
    if(x<y)
    return x;
    return y;
}*/
int main(){    //Main function...
    int i,j,n=5;
    Job temp;
    Job jobs[5]={  //jobs with deadline and profit
        {"j1",2,60},
        {"j2",1,100},
        {"j3",3,20},
        {"j4",2,40},
        {"j5",1,20},
    };
    for(i=1;i<=n;i++){
        for(j=0;j<n-i;j++){    
        
            if(jobs[j+1].profit>jobs[j].profit){
                temp = jobs[j+1];
                jobs[j+1] = jobs[j];
                jobs[j] = temp;
            }
        }
    }
//display the changes
cout<<"     Job     Deadline     Profit     "<<endl;
for(i=0;i<n;i++){
    cout<<"     "<<jobs[i].id;
    cout<<"         "<<jobs[i].deadline;
    cout<<"          "<<jobs[i].profit<<endl;
}

jobSequencingWithDeadline(jobs,n);
return 0;
}

    void jobSequencingWithDeadline( Job jobs[],int n){
        int i, j;
        int  maxprofit,   dmax=0;
        

        for(i=0;i<n;i++){//for calculating totaldeadlines...
            if(jobs[i].deadline > dmax){
                dmax=jobs[i].deadline;
                
            }
        }
    cout<<"dmax: "<<dmax<<endl;
    cout<<"Required Jobs: ";
    for(i=0;i<dmax;i++){
        cout<<jobs[i].id;
        if(i<dmax){
            cout<<"-->";
        }
    }
    maxprofit = 0;
    for(i=0;i<dmax; i++){
        
        maxprofit  += jobs[i].profit;
    }
    cout<<"Max Profit:"<<maxprofit<<endl;
    }