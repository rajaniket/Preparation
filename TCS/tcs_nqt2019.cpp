#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int x=0,y=0;
int Count=0;
int Count_x=1,Count_y=1;
for(int i=0;i<n;i++){
  //Count+=10;
  if(i+1&1){
    if(Count_x&1)
    x+=(i+1)*10;
    else
    x-=(i+1)*10;
    Count_x++;
  }
  else{
    if(Count_y&1)
        y+=(i+1)*10;
    else
        y-=(i+1)*10;
    Count_y++;
    }
}
cout<<x<<","<<y<<endl;
}
