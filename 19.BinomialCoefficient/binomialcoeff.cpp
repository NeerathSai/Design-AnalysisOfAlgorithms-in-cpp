# include <iostream>
using namespace std;
int min (int a, int b){
int small;
small = a<b ? a:b;
return small;
}
int BC(int n , int k){
int C[n+1][k+1],i,j;
for (i = 0; i<=n; i++){
for (j = 0; j<=min(i,k);j++){
if(j==0 || j==i){
C[i][j] = 1;
}else{
C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
}
}
}
return C[n][k];
}
int main (){
int g,h;
cout<<"Give two integers"<<endl;
cin>>g;
cin>>h;
cout<< "Value of BC is "
<< BC(g, h)<<endl;
return 0 ;
}
