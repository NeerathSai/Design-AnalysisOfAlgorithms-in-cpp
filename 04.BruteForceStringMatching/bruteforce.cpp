#include<iostream>
#include<string>
using namespace std;
int patternMatch(string pattern,string text){
int m= pattern.length();
int n= text.length();
for(int i=0;i<=n-m;i++){
int j=0;
while(j<m && pattern[j]==text[i+j]){
j++;
}
if(j==m){
return i;
}else{
j=0;
}
}
return -1;
}
int main(){
string pattern,text;
cout<<"Enter the pattern string: "<<endl;
cin>>pattern;
cout<<"Enter the text string: "<<endl;
cin>>text;
cout<<"Pattern :"<<pattern<<endl;
cout<<"Text :"<<text<<endl;
cout<<"Patttern Matched at Index Of: "<<patternMatch(pattern,text);
return 0;
}
