 #include<iostream>
using namespace std;

void knapsack(int n,float weight[20],float profit[20],float capacity){
   
   float x[20],TotalProfit=0;
   int i,j;

   for(i=0;i<n;i++){
       x[i]=0.0;
   }

   for(i=0;i<n;i++){
       if(weight[i]>capacity)
       break;
       else{
           x[i]=1.0;
           TotalProfit=TotalProfit + profit[i];
           capacity = capacity - weight[i];
       }
   }
  
  if(i<n)
  //cout<<i<<endl;
  x[i]= capacity /weight[i];

  TotalProfit = TotalProfit + (x[i] * profit[i]);

  cout<<"The result Vector is: "<<endl;
  for(i=0;i<n;i++){
      cout<<x[i]<<' ';
  }
  cout<<"Maximum profit is: "<<TotalProfit;


}

int main(){
    float weight[20],profit[20],capacity,ratio[20],temp;
    int i,j,num;
    
    cout<<"Enter the No.of object"<<endl;
    cin>>num;

    cout<<"\nEnter the weight and profit of the each objects"<<endl;
    for(i=0;i<num;i++){
        cin>>weight[i]>>profit[i];       
    }
    cout<<"\nEnter the capacity"<<endl;
    cin>>capacity;
    

    for(i=0;i<num;i++){
       // cout<<"profit: "<<profit[i]<<"  weight: "<<weight[i]<<endl;
        ratio[i]=profit[i]/weight[i];
       // cout<<"ratio: " <<ratio[i]<<endl;
    }
     
     for(i=0;i<num;i++){
         for(j=i+1;j<num;j++){
            if(ratio[i]<ratio[j]){
                temp = ratio[j];
                ratio[j]=ratio[i];
                ratio[i]= temp;

                temp =  weight[j];
                weight[j] = weight[i];
                weight[i]= temp;

                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;

            }
         }
     }
     knapsack(num,weight,profit,capacity);
     return 0;

}