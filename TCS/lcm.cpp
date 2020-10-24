
#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int lcm(int a,int b){

int Max=max(a,b);
int store=Max;
while(1){
   if(Max%a==0 && Max%b==0){
    return Max;
   }
 Max+=store;
}
}

int main(){
cout<<lcm(25,2);
}
