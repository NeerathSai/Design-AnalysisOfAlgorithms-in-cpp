#include <iostream>
using namespace std;
int h[50], i, j, k ,n,v,heap;
void heapBU(){
for (i=n/2; i>=1; i--){
k = i; v = h[k];
heap = false;
while(!heap && 2*k <=n){
j = 2*k;
if(j<n){
if (h[j] < h[j+1]) j=j+1;
}
if (v>=h[j]){
heap = true;
}else{
h[k] = h[j];
k = j;
}
}
h[k] = v;
}
}
int main()
{
cout<<"Give number of elements"<<endl;
cin>>n;
cout<<"Enter the elements"<<endl;
for(int i = 1; i<=n; i++){
cin>>h[i];
}
heapBU();
cout<<"Elements of bottom-up heap are: "<<endl;
for(k =1; k<=n; k++){
cout<<h[k]<<" ";
}
cout<<endl;
return 0;
}
