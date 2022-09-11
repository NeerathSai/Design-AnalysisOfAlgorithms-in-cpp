#include<iostream>
using namespace std;
int maximum(int a,int b){
if(a>b){
return a;
}else{
return b;
}
}
int knapSack(int max,int weight[],int value[],int n){
//base case
if(n==0 || max==0){
return 0;
}
if(weight[n-1] > max){
return knapSack(max,weight,value,n-1);
}else{
return maximum(value[n-1] + knapSack(max-weight[n-1],weight,value,n-1),knapSack(max,weight,value,n-1));
}
}
int main(){
int max;
cout<<"Enter the maximum capacity: "<<endl;
cin>>max;
//input the weights and values
cout<<"Enter the number of items: "<<endl;
int n;
cin>>n;
int weight[n];
int value[n];
for(int i=0;i<n;i++){
cout<<"Enter the weight and value of item:"<<i+1<<endl;
cin>>weight[i];
cin>>value[i];
}
cout<<knapSack(max,weight,value,n);
return 0;
}
