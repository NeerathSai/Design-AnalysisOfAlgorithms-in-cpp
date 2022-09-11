#include<iostream>
using namespace std;
int euclids_gcd(int a,int b){
if(b==0){
return a;
}
return euclids_gcd(b,a%b);
}
int main(){
cout<<"Enter the first number:"<<endl;
int a;
cin>>a;
cout<<"Enter the second number:"<<endl;
int b;
cin>>b;
cout<<"GCD using euclid's method is:"<<euclids_gcd(a,b)<<endl;
return 0;
}
