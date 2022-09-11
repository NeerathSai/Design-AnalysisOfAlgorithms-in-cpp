#include <iostream>
#define SIZE 27 //26 aplhabets and 1 for remaining charactors
using namespace std;
int table[SIZE]; int m, n;
string p, t;
/*
pattern = kartheek
text = balaji_kartheek
shiftTable:
a e h k r t *
8 8 8 8 8 8 8
*/
int position(char c){
if (c=='_'){
return SIZE-1; //last index
}else{
return c - 'A'; //gives index of char in shiftTable
}
}
void shiftTable(){
for (int i = 0; i<SIZE; i++){
table[i] = m; //first fill with the size of pattern string
}
for (int j = 0; j<m-1; j++){
int pos = position(p[j]);
table[pos] = m-1-j;
}
}
int Horspool(){
int i = m-1; //last pos in patttern
while(i<=n-1){
int k = 0; //no. of chars match
while(k<=m-1 && p[m-1-k] == t[i-k]){
k++;
}
if(k==m){
return i-m+1;
}else{
i = i + table[position(t[i])]; //shifting the index value
}
}
return -1;
}
int main(){
cout<<"Enter the pattern in uppercase "<<endl;
cin>>p;
m = p.length();
cout<<"Pattern length is "<<m<<endl;
cout<<"Enter the text in uppercase "<<endl;
cin>>t;
n =t.length();
cout<<"Text length is "<<n<<endl;
shiftTable();
cout<<"ShiftTable is: "<<endl;
cout<<endl;
for(int i = 0 ; i<SIZE; i++){
cout<<table[i]<<" ";
}
cout<<endl;
cout<<"String found at : "<<Horspool()<<endl;
return 0;
}
