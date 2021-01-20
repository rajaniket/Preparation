//https://prepinsta.com/tcs-coding-questions/jar-of-candies/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n=10,k=5;
    int num;
    cin>>num;
    if(num<=k && num>=1)
    {
        cout<<"NUMBER OF CANDIES SOLD : "<<num<<endl;
        cout<<"NUMBER OF CANDIES AVAILABLE : "<<n-num<<endl;
    }
    else
    {
        cout<<"INVALID INPUT"<<endl;
        cout<<"NUMBER OF CANDIES LEFT : "<<n-num<<endl;

    }

}
