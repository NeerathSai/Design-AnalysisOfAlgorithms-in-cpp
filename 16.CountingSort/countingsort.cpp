#include <iostream>
using namespace std;
int S[10] ={0};
int* compCount(int A[], int n){
int count[10];
for(int i =0; i<n; i++)
count[i] =0;
for(int i =0 ; i<n-1; i++){
for(int j=i+1; j<n; j++){
if(A[i]<A[j]){
count[j] = count[j]+1;
}else{
count[i] = count[i]+1;
}
}
}
for(int i =0; i<n; i++) {
S[count[i]] = A[i];
}
return S;
}
int main(){
int n;int arr[50];
cout<<"Enter number of elements "<<endl;
cin>>n;
cout<<"Enter the elements "<<endl;
for(int i =0; i<n; i++){
cin>>arr[i];}
compCount (arr,n);
cout<<"Sorted array is "<<endl;
for(int i = 0; i<n;i++){
cout<<S[i]<<endl;
}
return 0;
}
