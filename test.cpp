#include<iostream>

int divint(int,int);

int main(){

double total=0.0;

for(int i=0;i<=10000; i++){
  for(int j=0;j<=1000;j++){
    x=j;
    y=j;
    total+=divint(x,y);
  }
}

std::cout<<total<<std::endl;
return 0;
}

int divint(int a, int b)
{ return double(a/b);}
