// 6*6=36 , end of the square is number itself
// 76*76 = 5776
#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
bool automorphic(int n){
int sq=n*n;
while(n!=0){
 if(n%10!=sq%10)
 return false;
 n=n/10;
 sq=sq/10;
}
return true;
}

int main(){
int n=50;
cout<<automorphic(25);
}
