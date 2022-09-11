#include <iostream>
using namespace std;
int max(int a, int b){
return a>b?a:b;
}
int knapsack(int wt[], int val[], int cap,int n) {
int m[n + 1][cap + 1] = {0};
for (int i = 0; i < n; i++) {
for (int j = 0; j < cap; j++) {
m[i][j] = 0;
}
}
for (int i = 1; i <= n; i++) {
for (int j = 0; j <= cap; j++) {
int weight = wt[i - 1];
if(weight<=j){
m[i][j] = max(val[i - 1] + m[i - 1][j - weight], m[i - 1][j]);
}else{
m[i][j]=m[i-1][j];
}
}
}
return m[n][cap];
}
int main() {
int cap;
int wt[] = {2,5,10,5};
int val[] = {20,30,10,10};
cout<<"Give capacity:"<<endl;
cin>>cap;
int n = sizeof(val) / sizeof(val[0]);
int s = knapsack(wt, val, cap,n);
cout<<"Most feasible value: "<<s<<endl;
return 0;
}
