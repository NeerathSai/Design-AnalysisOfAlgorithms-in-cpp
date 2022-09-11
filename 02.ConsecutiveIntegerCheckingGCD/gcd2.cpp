#include<iostream>
using namespace std;
int consecutive_gcd(int a,int b){
int min;
if(a>b){
min = b;
}else{
min = a;
}
for(int i= min;i>=1;i--){
if(a%i==0 && b%i==0){
return i;
}
}
return -1;
}
int main(){
int a,b;
cout<<"Enter the first number: "<<endl;
cin>>a;
cout<<"Enter the second number: "<<endl;
cin>>b;
cout<<"The GCD of two numbers using consecutive integer checking is: "<<consecutive_gcd(a,b)<<endl;
return 0;
}
