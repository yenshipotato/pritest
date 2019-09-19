#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
int num1;
cin>>num1;
int num3[num1+1];
string card[num1+1];
for(int i=0;i<num1+1;i++){
getline(cin, card[i]);
num3[i]=card[i].length();
for(int k=0;k<num3[i];k++){
for(int q=0;q<num3[i];q++){
if(card[i][k]>='A'&&card[i][k]<='A'+25){
if(card[i][q]>='A'&&card[i][q]<='A'+25){
if(card[i][k]>card[i][q]){
swap(card[i][k],card[i][q]);
swap(card[i][k+1],card[i][q+1]);
if(card[i][k+2]!=' '||card[i][q+2]!=' '){
swap(card[i][k+2],card[i][q+2]);
}
}
else if(card[i][k]==card[i][q]){
if(card[i][k+2]!=' '&&card[i][q+2]!=' '){
if(card[i][k+2]>card[i][q+2]){
swap(card[i][k+1],card[i][q+1]);
swap(card[i][k+2],card[i][q+2]);
}
}
else if(card[i][k+2]==' '&&card[i][q+2]==' '){
if(card[i][k+1]>card[i][q+1]){
swap(card[i][k+1],card[i][q+1]);
}
}
else if(k>q&&card[i][q+2]==' '&&card[i][k+2]!=' '){
swap(card[i][k+1],card[i][q+1]);
card[i][q+2]=card[i][k+2];
card[i][k+2]=' ';
}
}
}
}
}
}
}
for(int a=0;a<num1+1;a++){
cout<<card[a]<<endl;
}
return 0;
}
