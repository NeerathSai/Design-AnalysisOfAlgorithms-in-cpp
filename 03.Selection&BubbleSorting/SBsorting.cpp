#include<iostream>
using namespace std;
void bubblesort(int size,int arr[]){
int bubble_count=0;
for(int i=0;i<size-1;i++){
for(int j=0;j<size-i-1;j++){
bubble_count++;
if(arr[j]>arr[j+1]){
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
cout<<"Bubble sorted array: "<<endl;
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
cout<<"The number of times the basic operation runned in Bubble sort is: "<<bubble_count<<endl;
}
void selectionsort(int size,int arr[]){
int min,selection_count=0;
for(int i=0;i<size-1;i++){
min = i;
for(int j=i+1;j<size;j++){
selection_count++;
if(arr[j]<arr[min]){
min = j;
}
}
int temp = arr[i];
arr[i] = arr[min];
arr[min] = temp;
}
cout<<"Selection sorted order: "<<endl;
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
cout<<"The Number of times the basic operation runned in selection sort is:"<<selection_count<<endl;
}
int main(){
cout<<"Enter the size of the array: "<<endl;
int size;
cin>>size;
int arr[size];
cout<<"Enter the elements in the array: "<<endl;
for(int i=0;i<size;i++){
cin>>arr[i];
}
int flag;
do{
cout<<"Enter the flag value 1 for bubble sort: "<<endl;
cout<<"Enter the flag value 2 for selection sort: "<<endl;
cout<<"Enter 3 for exit"<<endl;
cin>>flag;
switch(flag){
case 1:bubblesort(size,arr);
break;
case 2:selectionsort(size,arr);
break;
default: cout<<"Enter the valid flag value: "<<endl;
break;
}
}while(flag==1 || flag==2);
return 0;
}
