#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
bool armstrong(int n){
int temp,sum=0,cur_n=n;
while(cur_n!=0){
temp=cur_n%10;
cur_n=cur_n/10;
sum+=pow(temp,3);
}
return sum==n;
}
int main(){
int n=50;
cout<<armstrong(123);
}
